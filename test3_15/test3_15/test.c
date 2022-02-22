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
int mystrlen(char* str)
{
	if (*str != '\0')
		return 1 + mystrlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[] = "bitt";
	/*int len = strlen(arr);
	printf("%d\n", len);*/
	int len = mystrlen(arr);
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);*/
	printf("%d\n", len); 
	return 0;
}