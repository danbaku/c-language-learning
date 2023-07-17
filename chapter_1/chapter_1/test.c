#define _CRT_SECURE_NO_WARNINGS 1

//C语言中所有的字符都是英文的字符
#include<stdio.h>

////主函数 是程序的入口，写的C语言代码都是从main函数的第一行开始执行的
////main函数是必须有的，但是有且仅有一个
//int main() {
//	printf("helloworld\n");
//	//printf 是库函数 - C语言的标准库中提供的一个现成的函数-直接可以使用
//	//功能是在屏幕上打印信息
//	//库函数的使用，是需要包含头文件的,printf需要的头文件叫：stdio.h
//	return 0;
//}

//int main(){
//	//sizeof计算结果的单位是字节
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main(){
//	int age = 150;
//	float weight = 45.5f;
//	char ch = 'w';
//	return 0;
//}

//int a = 100;//全局变量
//int main(){
//	int a = 1000;//局部变量
//	{
//		int b = 0;
//		printf("%d\n", b);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = 0;
//
//	//输入2个值
//	scanf("%d %d", &a, &b);//3 5
//	//计算
//	s = a + b;
//	//输出
//	printf("%d\n", s);
//
//	return 0;
//}