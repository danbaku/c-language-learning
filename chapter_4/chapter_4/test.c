#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////��unsigned int ������Ϊuint,����uintҲ��һ����������
//typedef unsigned int uint;
//
//int mian() {
//	//������a��b����������������һ����
//	unsigned int a = 0;
//	uint b = 0;
//	return 0;
//}

//#include<stdio.h>
//
//void test()
//{
//	static int i = 1;
//	i++;//++i; i = i+1;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int j = 0;
//	while (j < 5)
//	{
//		test();
//		j = j + 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//extern int g_val;
//
//void test()
//{
//	printf("test():%d\n", g_val);
//}
//
//int main()
//{
//	printf("%d\n", g_val);
//	test();
//	return 0;
//}

//#include<stdio.h>
////define�����ʶ������
//#define MAX 1000
////define�����
////������в���
////�����滻
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int num = 10;
//    &num;//ȡ��num�ĵ�ַ
//       //ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//    printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	//& - ȡ��ַ������
//	int * pa = &a;//0x0012ff48  -�ڴ�ı��==��ַ==ָ��, pa��ָ�����
//	//* ����˵��pa��ָ�����
//	//int ����˵��paָ�����int���͵ı���
//	*pa = 20;//* �����ò����� - ͨ����ַ�ҵ���ַ��ָ��Ķ���*pa�͵ȼ���a
//
//	printf("%d\n", a);
//	return 0;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'q';
//    printf("%c\n", ch);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}

#include<stdio.h>

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	int num;

	struct Stu s1 = { "����", 20, 88.0f };
	struct Stu s2 = { "����", 18, 65.5f };
	struct Stu s3 = { "����", 19, 99.8f };

	struct Stu* ps1 = &s1;

	printf("%s %d %f\n", ps1->name, ps1->age, ps1->score);

	//printf("%s %d %f\n", s1.name, s1.age, s1.score);
	//printf("%s %d %f\n", s2.name, s2.age, s2.score);
	//printf("%s %d %f\n", s3.name, s3.age, s3.score);

	//�ṹ�����.�ṹ���Ա
	//�ṹ��ָ��->�ṹ���Ա

	return 0;
}