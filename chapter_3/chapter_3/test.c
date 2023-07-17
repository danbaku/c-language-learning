#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化，剩余元素默认初始化为0
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


//垃圾代码，vc编译器和gcc编译器所得结果不同。




#include<stdio.h>

int main() {
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);
	return 0;
}