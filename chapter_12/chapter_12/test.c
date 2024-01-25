#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int a = 10; //在内存中开辟一块空间
//    int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//                //a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个之指针变量。
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
//		//p指向的是数组首元素
//		//p+i 是数组中下标为i的元素的地址
//		//p+i 起始时跳过了i*sizeof(int)个字节
//	}
//	return 0;
//}

//模拟实现了strlen
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
//	int* p =  &a;//p是指针变量，一级指针变量
//	int* * pp = &p;//pp指针变量，二级指针变量
//	**pp = 20;
//	printf("%d\n", a);//20
//	//int** * ppp = &pp;//pp是指针变量，三级指针变量
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