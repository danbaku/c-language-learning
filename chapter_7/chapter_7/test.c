#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//#include <stdio.h>
////实现成函数，但是不能完成任务
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////正确的版本
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//
//bool is_prime(int n)
//{
//	//拿2~sqrt(n)之间数字试除
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return false;
//	}
//	return true;//是素数
//}
//
//int main()
//{
//	//打印100~200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否是素数？
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//#include<stdio.h>
//#include<stdbool.h>
//
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return true;
//	else
//		return false;
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否是闰年
//		if (is_leap_year(y))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//#include<stdio.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//输入的是要查找的值
//	//findnum();
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}



//#include<stdio.h>
//
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[20] = "hello";
//    int ret = strlen(strcat(arr, "bit"));
//    printf("%d\n", ret);
//    return 0;
//}
 
 
 
//#include <stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //结果是啥？
//    //注：printf函数的返回值是打印在屏幕上字符的个数
//    return 0;
//}