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
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("�ɹ�\n");
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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("�Ҳ���");*/
	//int i = 1;
	//int n = 1;
	//printf("����n�Ľ׳ˣ�����n:");
	//scanf("%d", &n);
	//int s = 1;
	//while (i<=n)
	//{
	//	s *= i;
	//	i++;
	//}
	//printf("%d�Ľ׳�Ϊ:%d\n",n,s);
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
	//printf("���Ϊ:%d\n", all);  //4037913

	//int password = 12;
	//int pa = 0;
	//int ci = 1;
	//while (ci <= 3)
	//{
	//	printf("���������루�������,��%d�Σ�\n",ci);
	//	scanf("%d", &pa);
	//	getchar();
	//	if (pa == password)
	//	{
	//		printf("�¶���������%d\n",password);
	//		break;
	//	}
	//		
	//	else
	//	{
	//		printf("��δ���,%d����\n",pa);
	//		ci++;
	//	}
	//		
	//}
	// printf("ʧ��");
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
//	printf("����������:>");
//	scanf("%s", password);
//	// ��������ʣһ��\n
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("%s\n", password);
//	printf("%s\n", password[0]);
//	printf("%s\n", password[1]);
//	printf("��ȷ������(Y/N):");
//	// getchar();
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ����");
//	else
//		printf("������");
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF){
//		putchar(ch);
//	}*/
//	return 0;
//}