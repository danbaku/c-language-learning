#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ���������飬����10��Ԫ��
//	int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", arr[7]);
//	arr[7] = 100;
//	printf("%d\n", arr[7]);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", arr[i]);
//		i++;
//	}
//}


//�������룬vc��������gcc���������ý����ͬ��




#include<stdio.h>

int main() {
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);
	return 0;
}