#define _CRT_SECURE_NO_WARNINGS 1

//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

#include<stdio.h>
void init(int a[], int sz) {
	for (int i = 0; i < sz; i++) {
		a[i] = 0;
	}
}

void print(int a[], int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}	

int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(a) / sizeof(a[0]);
	print(a, sz);
	reverse(a, sz);
	//init(a, sz);
	print(a, sz);
	
	return 0;
}