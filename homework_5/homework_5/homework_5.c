#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//
//int main() {
//    int fun;
//    fun = func(1);
//    printf("%d", fun);
//    return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int i;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int num[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &num[i]);
//	}
//	for (int i = 0; i < 3 - 1; i++) {
//		for (int j = 0; j < 3 - i - 1; j++) {
//			if (num[i] < num[i + 1]) {
//				int a;
//				a = num[i];
//				num[i] = num[i + 1];
//				num[i + 1] = a;
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num;
//    for (num = 100; num <= 200; num++) {
//        int flag = 1;
//        for (int i = 2; i < num; i++) {
//            if (num % i == 0) {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1) {
//            printf("%d\n", num);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//	int year;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//			printf("%dÊÇÈòÄê ", year);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int zhanzhuan(int a, int b) {
//	if (0 == b) {
//		return a;
//	}
//	return zhanzhuan(b, a % b);
//}
//
//int main() {
//	int a, b;
//	int num;
//	scanf("%d%d", &a, &b);
//	num = zhanzhuan(a,b);
//	printf("%d", num);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main() {
//	int num[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//	for (int i = 0; i < 10 - 1; i++) {
//		for (int j = 0; j < 10 - i - 1; j++) {
//			if (num[j] < num[j + 1]) {
//				int a;
//				a = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = a;
//			}
//		}
//	}
//	printf("%d", num[0]);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += flag * (1.0 / i);
//		flag *= -1;
//	}
//	printf("%lf", sum);
//	return 0;
//}