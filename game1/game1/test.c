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
	//��ʼ��
	initboard(board,ROW,COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		//��ӡ����
		displayboard(board, ROW, COL);
		//�ж�
		ret = iswin(board, ROW, COL);
		//printf("ret=%c\n", ret);
		if (ret != 1)
		{
			break;
		}
			
		//��������
		computermove(board, ROW, COL);
		//��ӡ����
		displayboard(board, ROW, COL);
		//�ж�
		ret = iswin(board, ROW, COL);
		
		if (ret != 1)
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("-------���Ӯ��------\n");
	}
	else if (ret == '$')
	{
		printf("-------����Ӯ��------\n");
	}
	else
	{
		printf("-------ƽ��------\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�˳���Ϸ\n");
			break;
		}
	} while (1);
}
int main()
{
	test();
	return 0;
}