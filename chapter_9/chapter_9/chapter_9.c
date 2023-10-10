#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	int arr[5];
//	int arr2[3 + 2];
//
//	char arr3[8];
//
//	int n = 0;
//	scanf("%d", &n);
//	int arr4[n];
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩余的元素默认初始化为0
//	int arr2[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//
//	int arr3[] = { 1,2,3 };
//
//	int arr5[10] = { 0 };
//	int arr6[] = { 0 };
//
//	char arr7[] = { 'a', 'b', 'c' };
//	char arr8[] = "abc";
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	            //0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[6]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 10 - i;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	            //0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[6]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][5];
//	char arr1[3][5];
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };//不完全初始化
//	int arr1[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int arr2[][10] = { {1,2},{2,3,4},{5,5,5} };
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{4,5},{6,7,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i * 5 + j+1;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{4,5},{6,7,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5};//0~9
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        printf("%d\n", arr[i]);//当i等于10的时候，越界访问了
//    }
//    return 0;
//}


//#include <stdio.h>
//void sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };//降序
//	//对arr进行排序，排序为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr);
//	//冒泡排序
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//printf("%d\n", sizeof(arr));//40
//
//	return 0;
//}

#include<stdio.h>
//void sort(int *arr, int sz)
void sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };//降序
	//对arr进行排序，排序为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);//arr这里不是特殊的2种情况，就是数组首元素的地址
	//冒泡排序
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

