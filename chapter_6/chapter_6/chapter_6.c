#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int flag = 1;
//	for (int i = 1; i <= n; i++) {
//		flag *= i;
//	}
//	printf("%d", flag);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int rel = 0;
//	for (int j = 1; j <= 10; j++) {
//		int flag = 1;
//		for (int i = 1; i <= j; i++) {
//			flag *= i;
//		}
//		rel += flag;
//	}
//	printf("%d", rel);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int flag = 1;
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		flag *= i;
//		sum += flag;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	int num = 0;
//	int flag = 0;
//	scanf("%d", &num);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，下标是%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0) {
//		printf("没找到");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to wow!!!!!!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include<stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码错误，退出程序\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("******  1. play     ******\n");
//	printf("******  0. exit     ******\n");
//	printf("**************************\n");
//}
//
//
//void game()
//{
//	//1. 生成1~100的随机数
//	//rand函数生产的伪随机数
//	//rand函数生产的随机数的范围是：0~RAND_MAX(32767)
//	//rand函数在生产随机数之前，要使用srand函数设置随机数的生成器
//	int ret = rand()%100+1;//0~99+1 --> 1~100
//	//printf("%d\n", ret);
//	//RAND_MAX;
//	
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//开始倒计数关机
//
//again:
//	printf("你的电脑在1分钟内就会关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("你很配合，已经取消关机\n");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//开始倒计数关机
//
//	while (1)
//	{
//		printf("你的电脑在1分钟内就会关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("你很配合，已经取消关机\n");
//			break;
//		}
//	}
//
//	return 0;
//}