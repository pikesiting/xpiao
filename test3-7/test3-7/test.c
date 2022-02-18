#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int ii = 1;
	int m = 9;
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("成功\n");
			break;
		}
	}
	switch (ii)
	{
	case 1:
		m = 8;
	case 2:
		m = 7;
	default:
		m = 3;

	}
	printf("%d\n", m);
	return 0;
}
	//char arr1[] = "welcome to bit !!!!";
	//char arr2[] = "###################";
	//int left = 0;
	//// int right = sizeof(arr1) / sizeof(arr1[0])-2;
	//int right = strlen(arr1) - 1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);
	//	system("cls");
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);

		

	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到");*/
	//int i = 1;
	//int n = 1;
	//printf("计算n的阶乘，输入n:");
	//scanf("%d", &n);
	//int s = 1;
	//while (i<=n)
	//{
	//	s *= i;
	//	i++;
	//}
	//printf("%d的阶乘为:%d\n",n,s);
	//int all = 0;
	//for (int k = 1; k <= 10;k++)
	//{
	//	int n = 1;
	//	int m = 1;
	//	while (n <= k)
	//	{
	//		m *= n;
	//		n++;
	//	}
	//	all += m;
	//}
	//printf("结果为:%d\n", all);  //4037913

	//int password = 12;
	//int pa = 0;
	//int ci = 1;
	//while (ci <= 3)
	//{
	//	printf("请输入密码（最多三次,第%d次）\n",ci);
	//	scanf("%d", &pa);
	//	getchar();
	//	if (pa == password)
	//	{
	//		printf("猜对啦，就是%d\n",password);
	//		break;
	//	}
	//		
	//	else
	//	{
	//		printf("这次错了,%d不对\n",pa);
	//		ci++;
	//	}
	//		
	//}
	// printf("失败");
	/*int i = 0;
	int k = 0;
	for (i = 0, k = 0; k == 0; i++, k++)
	{
		printf("111");

		k++;
		printf("22");
	}*/
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;
		printf("%d\n", i);
	}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'4' || ch>'8')
		{
			continue;
		}
		putchar(ch);
	}*/

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	// 缓冲区还剩一个\n
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("%s\n", password);
//	printf("%s\n", password[0]);
//	printf("%s\n", password[1]);
//	printf("请确认密码(Y/N):");
//	// getchar();
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认了");
//	else
//		printf("放弃了");
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF){
//		putchar(ch);
//	}*/
//	return 0;
//}