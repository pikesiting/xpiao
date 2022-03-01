#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
} 

void displayboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j != col - 1){
				printf(" %c |", board[i][j]);
			}
			else{
				printf(" %c \n", board[i][j]);
			}
		}
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2] );
		if (i != row-1){
			for (int j = 0; j < col; j++)
			{
				if (j != col - 1){
					printf("---|");
				}
				else{
					printf("---\n");
				}
			}

		}
		
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	
	//�ж�����Ϸ�
	while (1)
	{
		printf("��������������,�ÿո�����������س�\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y>=1&& y<=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else{
				printf("�����걻ռ���ˣ�����\n");
			}
		}
		else{
			printf("���겻�Ϸ�\n");
			break;
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	
	//�ж�����Ϸ�
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		// printf("������%d%d:>\n", x, y);
		// printf("���� %d:>\n", board[x][y]);
		if (board[x][y] == ' ')
		{
			board[x][y] = '$';
			break;
		}
	}
}

int isfull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char iswin(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
			return board[i][0];
		}
	}
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	if (isfull(board, ROW, COL) == 1)
	{
		return 'Q';  //����
	}
	return 1;
}