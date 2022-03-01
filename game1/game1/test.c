#define _CRT_SECURE_NO_WARNINGS 1 

#include "game.h"

void menu()
{
	printf("*****************\n");
	printf("**1.play 0.exit**\n");
	printf("*****************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	//初始化
	initboard(board,ROW,COL);
	//打印棋盘
	displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		//打印棋盘
		displayboard(board, ROW, COL);
		//判断
		ret = iswin(board, ROW, COL);
		//printf("ret=%c\n", ret);
		if (ret != 1)
		{
			break;
		}
			
		//电脑下棋
		computermove(board, ROW, COL);
		//打印棋盘
		displayboard(board, ROW, COL);
		//判断
		ret = iswin(board, ROW, COL);
		
		if (ret != 1)
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("-------玩家赢了------\n");
	}
	else if (ret == '$')
	{
		printf("-------电脑赢了------\n");
	}
	else
	{
		printf("-------平局------\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("退出游戏\n");
			break;
		}
	} while (1);
}
int main()
{
	test();
	return 0;
}