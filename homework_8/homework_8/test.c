#define _CRT_SECURE_NO_WARNINGS 1

//��9�ĸ���
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

//��дһ��������ʵ��n��k�η���ʹ�õݹ�ʵ��
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

//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磺����DigitSum(1729),��Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�����19

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


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba


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