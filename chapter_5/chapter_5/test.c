#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//
//	3 + 5;//表达式语句
//	printf("hehe\n");//函数调用语句
//	;//空语句 - 有时候我们需要一条语句，但是这条语句什么都不需要做，就可以使用空语句
//	return 0;
//}


//#include <stdio.h>
////代码1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//}
////代码2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//    else
//    {
//        printf("成年\n");
//    }
//}
////代码3
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("少年\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("青年\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("中年\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("老年\n");
//    }
//    else
//    {
//        printf("老寿星\n");
//    }
//
//}#include <stdio.h>
////代码1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//}
////代码2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//    else
//    {
//        printf("成年\n");
//    }
//}
////代码3
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("少年\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("青年\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("中年\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("老年\n");
//    }
//    else
//    {
//        printf("老寿星\n");
//    }
//
//}


//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//    return 0;
//}


////适当的使用{}可以使代码的逻辑更加清楚。
////代码风格很重要
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	int num;
//	scanf("%d",&num);
//	if (num % 2 == 0) {
//		printf("偶数");
//	}
//	else {
//		printf("奇数");
//	}
//}


//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 != 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//4
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//4
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char password[20];
//	printf("请输入密码:>");
//	scanf("%s", password);//scanf函数在读取字符串的时候，遇到空格就不再读取
//	int ch = 0;
//	while (getchar() != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):");
//	ch = getchar();
//
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int  i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int  i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	int i = 0;
//	//for (i = 0; i < 10; i++)//[0,10)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	for (i = 0; i <= 9; i++)//[0,9]
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //代码1
//    for (;;)
//    {
//        printf("hehe\n");
//    }
//    //for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问题。
//
//        //代码2
//        int i = 0;
//    int j = 0;
//    //这里打印多少个hehe?
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//
//    //代码3
//    int i = 0;
//    int j = 0;
//    //如果省略掉初始化部分，这里打印多少个hehe?
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//
//    //代码4-使用多余一个变量控制循环
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}

//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}