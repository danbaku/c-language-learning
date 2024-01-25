#define _CRT_SECURE_NO_WARNINGS 1

//����һ���������飬��ɶ�����Ĳ���

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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