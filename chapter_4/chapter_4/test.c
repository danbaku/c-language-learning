#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////将unsigned int 重命名为uint,所以uint也是一个类型名。
//typedef unsigned int uint;
//
//int mian() {
//	//在这里a和b这两个变量类型是一样的
//	unsigned int a = 0;
//	uint b = 0;
//	return 0;
//}

//#include<stdio.h>
//
//void test()
//{
//	static int i = 1;
//	i++;//++i; i = i+1;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int j = 0;
//	while (j < 5)
//	{
//		test();
//		j = j + 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//extern int g_val;
//
//void test()
//{
//	printf("test():%d\n", g_val);
//}
//
//int main()
//{
//	printf("%d\n", g_val);
//	test();
//	return 0;
//}

//#include<stdio.h>
////define定义标识符常量
//#define MAX 1000
////define定义宏
////宏可以有参数
////宏是替换
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int num = 10;
//    &num;//取出num的地址
//       //注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//    printf("%p\n", &num);//打印地址，%p是以地址的形式打印
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	//& - 取地址操作符
//	int * pa = &a;//0x0012ff48  -内存的编号==地址==指针, pa叫指针变量
//	//* 是在说明pa是指针变量
//	//int 是在说明pa指向的是int类型的变量
//	*pa = 20;//* 解引用操作符 - 通过地址找到地址所指向的对象。*pa就等价于a
//
//	printf("%d\n", a);
//	return 0;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'q';
//    printf("%c\n", ch);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}

#include<stdio.h>

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	int num;

	struct Stu s1 = { "张三", 20, 88.0f };
	struct Stu s2 = { "李四", 18, 65.5f };
	struct Stu s3 = { "王五", 19, 99.8f };

	struct Stu* ps1 = &s1;

	printf("%s %d %f\n", ps1->name, ps1->age, ps1->score);

	//printf("%s %d %f\n", s1.name, s1.age, s1.score);
	//printf("%s %d %f\n", s2.name, s2.age, s2.score);
	//printf("%s %d %f\n", s3.name, s3.age, s3.score);

	//结构体变量.结构体成员
	//结构体指针->结构体成员

	return 0;
}