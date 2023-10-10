#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}


//#include<stdio.h>
//
//size_t my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str+1);
//}
//
//int main()
//{
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);//传递的是数组首元素的地址
//	printf("%zd\n", len);
//
//	return 0;
//}


//#include<stdio.h>
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fac(n);
//	printf("%d\n", r);
//	return 0;
//}


//#include<stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}