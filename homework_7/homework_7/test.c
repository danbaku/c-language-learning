#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void chengfa(int num) {
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	chengfa(num);
//	return 0;
//}


//#include<stdio.h>
//
//void jiaohuan(int *num1, int *num2) {
//	int num3 = 0;
//	num3 = *num1;
//	*num1 = *num2;
//	*num2 = num3;
//}
//
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d", &num1);
//	scanf("%d", &num2);
//	jiaohuan(&num1, &num2);
//	printf("交换后：num1 = %d  num2 = %d\n", num1, num2);
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>
//
//bool runnian(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if (runnian(year) != 0) {
//		printf("是闰年");
//	}
//	else {
//		printf("不是闰年");
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool sushu(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for (int i = 100; i <= 200; i++) {
		if (sushu(i) != 0) {
			printf("%d ", i);
		}
	}
	return 0;
}