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
	int arr1[10] = { 1, 2, 3 };
	int arr2[] = { 1, 2, 3 ,4};
	int arr3[3] = { 1, 2, 3 };
	char arr4[10] = { '1', 2, '3' };
	char arr5[] = { '1',' 2', '3' };
	char arr6[] = "123124";
	printf("1%d\n2%d\n3%d\n4%d\n5%d\n6%d", sizeof(arr1), sizeof(arr2), sizeof(arr3), sizeof(arr4), sizeof(arr5), sizeof(arr6) );
	test();
	return 0;
}