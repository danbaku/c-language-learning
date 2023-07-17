#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	{
//		int a = 10;
//	}
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//
//extern int a;
//
//int test() {
//	printf("%d", a);
//	return 0;
//}
//
//int main() {
//	printf("%d\n", a);
//	test();
//	return 0;
//}


//#include<stdio.h>
//
////const常属性的
////修饰变量
//
//int main() {
//	const int a = 10;
//	printf("a=%d\n", a);
//	a = 100;
//	printf("a=%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	const int n = 10;
//	int arr2[n] = { 0 };
//}


//#include<stdio.h>
////#define定义标识符常量
//#define A 100
//
//int main() {
//	printf("%d\n", A);
//	int B = A;
//	printf("%d\n", B);
//}

//#include<stdio.h>
//
////枚举常量
////枚举：一一列举
//
////自定义类型,颜色
////枚举类型
//enum color
//{
//	//枚举类型里面列的值是枚举常量
//	red,   //0
//	green, //1
//	blue   //2
//};
//
//int main() {
//	enum color a = red;
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>  //字符串头文件
//
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//
//	/*printf("%s\n", arr1);
//	printf("%s", arr2);*/
//
//	//strlen是一个库函数，求字符串长度的, 统计的是字符串中\0之前的字符个数
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("c:\\code\\test.c\\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //问题1：在屏幕上打印一个单引号'，怎么做？
//    //问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//    printf("%c\n", '\'');
//    printf("%s\n", "\"");
//    return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//    return x + y;
//}
///*C语言风格注释
//int Sub(int x, int y)
//{
//    return x-y;
//}
//*/
//int main()
//{
//    //C++注释风格
//    //int a = 10;
//    //调用Add函数，完成加法
//    printf("%d\n", Add(1, 2));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int coding = 0;
//    printf("你会去敲代码吗？（选择1 or 0）:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//}

//while循环的实例
//#include <stdio.h>
//int main()
//{
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("我要继续努力敲代码\n");
//    }
//    if (line > 20000)
//        printf("好offer\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);
//    return 0;
//}
//// 上述代码，写成函数如下：
//#include <stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum = %d\n", sum);
//    return 0;
//}
