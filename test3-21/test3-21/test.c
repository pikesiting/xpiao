#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h" 


void menu()
{
	printf("*******************\n");
	printf("****** 1.play *****\n");
	printf("****** 0.exit *****\n");
	printf("*******************\n");

}
void game()
{
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//��ӡ����
	// displayboard(mine, ROW, COL);  
	displayboard(show, ROW, COL);
	//������
	setmine(mine,ROW,COL);
	//displayboard(mine, ROW, COL);  //ԭʼ
	//ɨ��
	FindMine(mine,show,ROW,COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (1);
}
int main()
{
	test();
	return 0;
}