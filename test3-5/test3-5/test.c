#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int age = 19;
	if (age < 18)
		printf("未成年\n");
	else if (age>=18 && age<35)
		printf("中年\n");
	return 0;
}

//int main()
//{
//	struct pik
//	{
//		char name[20];
//		int age;
//		char sex1[20];
//	};
//	struct pik pi1={ "张三",26,"女"};
//	printf("name=%s age=%d sex1=%s \n ", pi1.name, pi1.age, pi1.sex1);
//	return 0;
//}
//int main()
//{
//	int num = 1023234323322;
//	int* p = &num;
//	// *p = 11111111134221;
//	printf("%p\n", &num);
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(long long *));
//	return 0;
//}
//void test(){
//	static a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5){
//		test();
//		i++;
//	}
//	/*int b = i + i1;
//	printf("i=%d\n", b);*/
//
//	return 0;
//}


//#include <string.h>
//struct book
//{
//	char name[20];
//	short price;
//	char aut[20];
//};
//enum sexx
//{
//	male,
//	female,
//	appl
//};

//int main(){
//	struct book b1 = { "ccc", 20.1, "皮克斯" };
//	struct book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	strcpy(b1.name ,"csd==");
//	printf("修改后的name:%s\n", b1.name);
//
//	// %c字符  %s字符串
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 1.99;
//	printf("修改后的价格:%d\n", b1.price);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	#define aaa "231f"
//	printf("%s\n", aaa);
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%c\n", "\'");
//	printf("%s\n", "\"");
//	printf("%c\n", '\'');
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//};


//int main(){
//	double d = 3.11;
//	double* pd = &d;
//	*pd = 7.77;
//	*pd = 79.77;
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(pd));
//	//int a = 10; //申请了4个字节的空间
//	//
//	//int* p = &a;
//	//// printf("%p\n", &a);
//	//printf("%p\n", p);
//	//*p = 88;
//	//printf("%d\n", a);
//	return 0;
//
//}