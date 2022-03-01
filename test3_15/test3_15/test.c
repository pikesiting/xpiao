#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//int mo(int* a)
//{
//	if (*a > 10)
//	{
//		printf("%d\n", *a % 10);
//		(*a) = (*a) / 10;
//		mo(a);
//	}
//	else{
//		printf("%d\n", *a );
//	}
//	
//	return 0;
//}
//void print(int a){
//	if (a > 10)
//		
//		print(a / 10);
//	
//    printf("%d\n", a%10);    
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	// mo(&num);
//	print(num);
//	return 0;
//}
#include <string.h>
//int mystrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		printf("%c\n", *str);
//		count++;
//		str++;
//	}
//	return count;
//}
//int mystrlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + mystrlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bitt";
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//	int len = mystrlen(arr);
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[1]);
//	printf("%p\n", &arr[2]);*/
//	printf("%d\n", len);  
//	return 0;
//}
//int fac(n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac2(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int count = 0;
//ff(n)
//{
//	if (n == 3)
//		count++;
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 1;
//	else
//		return ff(n - 1) + ff(n - 2);
//}
//int a1 = 1;
//int b1 = 1;
//int c1 = 1;
//int nn = 2;
//int ff1(n){
//	if (n == 1 || n == 2)
//		return 1;
//	else{
//		a1 = b1;
//		b1 = c1;
//		c1 = a1 + b1;
//		nn++;
//		if (nn == n)
//			return c1;
//		else
//			return ff1(n);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	int r = 0;
//	scanf("%d", &n);
//	r = ff1(n);
//	printf("r=%d\n", r);
//	// printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	// 不完全初始化，剩下的元素默认为）;
//
//	int arr1[10] = { 1, 2, 3 };
//	char arr2[5] = {'a','b',98};  //剩下的都是0
//	char arr3[5] = "ab";// 剩下的是一个\0和0
//	char arr4[] = "abvrff";//放了所有的字和一个\0
//	//sizeof 是计算所在空间的大小，所以多1
//	//strlen 是求字符串长度的，只能针对字符串，\0结束
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
int main()
{
	//char arr[] = "asdfgh";
	//// printf("%c\n", arr[3]);
	//int i = 0;
	//int len = strlen(arr);
	//for (i = 0; i < len; i++)
	//{
	//	printf("%c\n", arr[i]);
	//}
	/*int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 7, 8, 9 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr1[i]);
	}*/
	int arr[3 ][4] = { { 14, 22, 3},{22,11} };
	char ch[5][6] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\n", &arr[i][j]);
			printf("%p\n", &arr[i][j]);
		}
	}
	return 0;
}