#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int a = 10; //���ڴ��п���һ��ռ�
//    int* p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//                //a����ռ��4���ֽڵĿռ䣬�����ǽ�a��4���ֽڵĵ�һ���ֽڵĵ�ַ�����p�����У�p����һ��ָ֮�������
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int* p;
//    *p = 20;
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        *(p++) = i;
//    }
//    return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int * p = arr;
//	int i = 0;
//	//arr-->p
//	//arr == p
//	//arr+i  ==  p+i
//	//*(arr+i) == *(p+i) == arr[i]
//	//*(arr+i) == arr[i]
//	//*(i+arr) == i[arr]
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", i[arr]);
//
//		//pָ�����������Ԫ��
//		//p+i ���������±�Ϊi��Ԫ�صĵ�ַ
//		//p+i ��ʼʱ������i*sizeof(int)���ֽ�
//	}
//	return 0;
//}

//ģ��ʵ����strlen
//#include<stdio.h>
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    printf("%p\n", arr);
//    printf("%p\n", &arr[0]);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p =  &a;//p��ָ�������һ��ָ�����
//	int* * pp = &p;//ppָ�����������ָ�����
//	**pp = 20;
//	printf("%d\n", a);//20
//	//int** * ppp = &pp;//pp��ָ�����������ָ�����
//	//...
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}