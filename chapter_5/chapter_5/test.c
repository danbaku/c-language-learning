#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//
//	3 + 5;//���ʽ���
//	printf("hehe\n");//�����������
//	;//����� - ��ʱ��������Ҫһ����䣬�����������ʲô������Ҫ�����Ϳ���ʹ�ÿ����
//	return 0;
//}


//#include <stdio.h>
////����1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//}
////����2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//    else
//    {
//        printf("����\n");
//    }
//}
////����3
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("����\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("����\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("����\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("����\n");
//    }
//    else
//    {
//        printf("������\n");
//    }
//
//}#include <stdio.h>
////����1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//}
////����2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//    else
//    {
//        printf("����\n");
//    }
//}
////����3
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("����\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("����\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("����\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("����\n");
//    }
//    else
//    {
//        printf("������\n");
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


////�ʵ���ʹ��{}����ʹ������߼����������
////���������Ҫ
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
//		printf("ż��");
//	}
//	else {
//		printf("����");
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
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("ѡ�����\n");
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
//		{//switch����Ƕ��ʹ��
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
//	printf("����������:>");
//	scanf("%s", password);//scanf�����ڶ�ȡ�ַ�����ʱ�������ո�Ͳ��ٶ�ȡ
//	int ch = 0;
//	while (getchar() != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):");
//	ch = getchar();
//
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
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
//    //����1
//    for (;;)
//    {
//        printf("hehe\n");
//    }
//    //forѭ���еĳ�ʼ�����֣��жϲ��֣����������ǿ���ʡ�Եģ����ǲ������ѧʱʡ�ԣ����׵������⡣
//
//        //����2
//        int i = 0;
//    int j = 0;
//    //�����ӡ���ٸ�hehe?
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//
//    //����3
//    int i = 0;
//    int j = 0;
//    //���ʡ�Ե���ʼ�����֣������ӡ���ٸ�hehe?
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//
//    //����4-ʹ�ö���һ����������ѭ��
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}