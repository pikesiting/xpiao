#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
	// ȷ��ð���������
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;//��������
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
	// int* a[] = bubble_sort(&arr, sz); // ð��������
	bubble_sort(arr, sz); 
	//for (int i = 0; i < sz; i++){
		//printf("%d\n",arr[i]);
		printf("%p\n", arr);
		printf("%p\n", &arr);
		printf("%p\n", &arr[0]);
		printf("%p\n", arr+1);
		printf("%p\n", &arr+1);
		printf("%p\n", &arr[0]+1);
		//��������������Ԫ�صĵ�ַ�������������
		//sizeof������ռ�ֽڵĴ�С
		//&arrȡ��ַ������ĵ�ַ����ʾ��������
		printf("%d\n", *arr);
	//}
	
	return 0;
}