#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h" 


void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;  //0-32767
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + 
		mine[x - 1][y] + 
		mine[x - 1][y + 1] + 
		mine[x][y - 1] + 
		mine[x][y + 1] + 
		mine[x + 1][y - 1] + 
		mine[x + 1][y] + 
		mine[x + 1][y + 1] - 
		8 * '0';
}
void zhouwei(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int row, int col)
{
	//printf("x=%d,y=%d,row=%d,col=%d\n", x, y, row, col);
	if (x >= 1 && x <= row &&y >= 1 && y <= col){
		// 合法
		//计算x  y坐标周围几个雷
		int count = get_mine_count(mine, x, y);
		if (count == 0){
			show[x][y] = count + '0';
			y--;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			y += 2;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			x--;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			y--;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			y--;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			x = x + 2;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			y++;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
			y++;
			show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
		}
		else
		{
			show[x][y] = count + '0';
		}
		
		//displayboard(show, row, col);
		//win++;

	}
	else
		return;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT){
		printf("请输入排查雷的坐标>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col){
			// 合法
			if (mine[x][y] == '1')
			{
				printf("很遗憾，雷炸死了你\n");
				displayboard(mine, row, col);
				break;
			}
			else
			{
				//计算x  y坐标周围几个雷
				int count = get_mine_count(mine, x, y);
				//printf("count=%d\n", count);
				if (count == 0){
					show[x][y] = count + '0';
					y--;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					
					y+=2;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					
					x--;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					
					y--;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					
					y--;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					x+=2;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					y++;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					y++;
					show[x][y] == '*' ? zhouwei(mine, show, x, y, row, col) : 0;
					displayboard(show, row, col);
				}
				else{
					show[x][y] = count + '0';
					displayboard(show, row, col);
					win++;
				}
				
				
				
			}	
		}
		else{
			printf("坐标非法，重新输入");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜成功，游戏结束\n");
	}
}