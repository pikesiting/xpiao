#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑将关机，如果输入我是猪，就取消关机！\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("11\n");
//	goto again;
//
//
//	return 0;
//}
//int main()
//{
//	srand((unsigned int) time(NULL));
//	int a = 0;
//	int input = 0;
//	a= rand()%100+1;
//	do
//	{
//		
//		// printf("a=%d\n",a);
//		printf("请猜入数字：\n");
//		scanf("%d", &input);
//		if (input < a)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > a)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	} while (1);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 5, 6, 7, 8, 9, 10, 11 };
//	int b = 11;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else{
//			printf("第%d个数是%d\n", mid,b);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (int i = 1; i <= 9;i++)
//	{
//		for (int j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
	
//int main()
//{
//	int i = 1000;
//	int c = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			c++;
//		}
//	}
//	printf("\n%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int pp = a;
//		a = b;
//		b = pp;
//	}
//	if (b < c)
//	{
//		int ppp = b;
//		b = c;
//		c = ppp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}