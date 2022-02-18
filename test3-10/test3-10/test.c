#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1000;
	int c = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
			c++;
		}
	}
	printf("\n%d\n", c);
	return 0;
}
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