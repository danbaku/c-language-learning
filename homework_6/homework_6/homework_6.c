#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//
//int main() {
//	int num = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			num += 1;
//		}
//		else if (i / 10 == 9) {
//			num += 1;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void menu() {
//	printf("************************************\n");
//	printf("************1. ��ʼ��Ϸ*************\n");
//	printf("************0. �˳���Ϸ*************\n");
//	printf("************************************\n");
//}
//
//void game() {
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1) {
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
//int main() {
//	int num = 0;
//	srand((unsigned)time(NULL));
//	do {
//		printf("*********��ӭ�����������Ϸ*********\n");
//		menu();
//		scanf("%d", &num);
//		switch (num) {
//		case 1:
//			printf("������Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��bye~bye~\n");
//			break;
//		default:
//			printf("��������ȷ������\n");
//			break;
//		}
//	} while (num);
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