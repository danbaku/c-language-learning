#define _CRT_SECURE_NO_WARNINGS 1

//数9的个数
//#include<stdio.h>
//int main() {
//	int flag = 0;
//	for (int i = 1; i <= 100; ++i) {
//		if (9 == i % 10 || 9 == i / 10) {
//			++flag;
//			if (i >= 10 &&  0 == i % 9) {
//				++flag;
//			}
//		}
//	}
//	printf("%d", flag);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (9 == i % 10) {
//			count++;
//		}
//		if (9 == i / 10) {
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//编写一个函数，实现n的k次方，使用递归实现
//#include<stdio.h>
//double fun1(int n,int k) {
//	if (k > 0) {
//		return n * fun1(n, k - 1);
//	}
//	else if (0 == k) {
//		return 1;
//	}
//	else {
//		return 1.0 / fun1(n, -k);
//	}
//}
//
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double fun = fun1(n, k);
//	printf("%lf",fun);
//	return 0;
//}

//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例如：调用DigitSum(1729),则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出19

//#include<stdio.h>
//DigitSum(unsigned int n) {
//	if (n < 10) {
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//int main() {
//	unsigned int n = 0;
//	scanf("%d",&n);
//	int a = DigitSum(n);
//	printf("%d",a);
//	return 0;
//}


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba


#include<stdio.h>
void reverse_string(char arr1[]) {
	size_t len = strlen(arr1);
	int tmp = arr1[0];
	arr1[0] = arr1[len - 1];
	arr1[len - 1] = '\0';
	if (strlen(arr1+1)>=2)
	{
		reverse_string(arr1 + 1);
	}
	arr1[len - 1] = tmp;
}
int main() {
	char arr1[] = "abcdef";
	reverse_string(arr1);
	printf("%s\n",arr1);
	return 0;
}