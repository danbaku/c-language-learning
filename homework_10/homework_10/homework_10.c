#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < sz; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

	//����
	//int c[] = {0};

	//0x0012ff40
	//���Ǵ���ģ���Ϊ���������������Ԫ�صĵ�ַ����һ������
	//c = a;
	//a = b;
	//b = c;

	return 0;
}