#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c=%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a;
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{   
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//业务处理
//	}
//	return 0;
//}

//#include<stdio.h>
//struct Book
//{
//	char name[20];
//	int price;
//};
//
////结构体变量.成员
////结构体指针->成员
//
//void Print(struct Book* pb)
//{
//	printf("%s %d\n", (*pb).name, (*pb).price);
//	printf("%s %d\n", pb->name, pb->price);
//}
//
//int main()
//{
//	struct Book b = {"C语言指南", 55};
//	printf("%s %d\n", b.name, b.price);
//	Print(&b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110
//	char c = a + b;
//	//00000000000000000000000000000101-a
//	//00000000000000000000000001111110-b
//	//00000000000000000000000010000011
//	//10000011-c
//	//11111111111111111111111110000011
//	//10000000000000000000000001111100
//	//10000000000000000000000001111101
//	//-125
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//#include<stdio.h>
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}


#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}