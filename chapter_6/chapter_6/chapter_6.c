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
//			printf("�ҵ��ˣ��±���%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0) {
//		printf("û�ҵ�");
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("������������˳�����\n");
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
//	//1. ����1~100�������
//	//rand����������α�����
//	//rand����������������ķ�Χ�ǣ�0~RAND_MAX(32767)
//	//rand���������������֮ǰ��Ҫʹ��srand���������������������
//	int ret = rand()%100+1;//0~99+1 --> 1~100
//	//printf("%d\n", ret);
//	//RAND_MAX;
//	
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	system("shutdown -s -t 60");//��ʼ�������ػ�
//
//again:
//	printf("��ĵ�����1�����ھͻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�����ϣ��Ѿ�ȡ���ػ�\n");
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
//	system("shutdown -s -t 60");//��ʼ�������ػ�
//
//	while (1)
//	{
//		printf("��ĵ�����1�����ھͻ�ػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�����ϣ��Ѿ�ȡ���ػ�\n");
//			break;
//		}
//	}
//
//	return 0;
//}