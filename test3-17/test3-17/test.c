#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
	// 确定冒泡排序的趟
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设有序
		for (int j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}


}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 2, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// int* a[] = bubble_sort(&arr, sz); // 冒泡排序函数
	bubble_sort(arr, sz); 
	//for (int i = 0; i < sz; i++){
		//printf("%d\n",arr[i]);
		printf("%p\n", arr);
		printf("%p\n", &arr);
		printf("%p\n", &arr[0]);
		printf("%p\n", arr+1);
		printf("%p\n", &arr+1);
		printf("%p\n", &arr[0]+1);
		//数组名是数组首元素的地址，除了两种情况
		//sizeof是数组占字节的大小
		//&arr取地址是数组的地址，表示整个数组
		printf("%d\n", *arr);
	//}
	
	return 0;
}