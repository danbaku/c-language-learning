#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	{
//		int a = 10;
//	}
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//
//extern int a;
//
//int test() {
//	printf("%d", a);
//	return 0;
//}
//
//int main() {
//	printf("%d\n", a);
//	test();
//	return 0;
//}


//#include<stdio.h>
//
////const�����Ե�
////���α���
//
//int main() {
//	const int a = 10;
//	printf("a=%d\n", a);
//	a = 100;
//	printf("a=%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	const int n = 10;
//	int arr2[n] = { 0 };
//}


//#include<stdio.h>
////#define�����ʶ������
//#define A 100
//
//int main() {
//	printf("%d\n", A);
//	int B = A;
//	printf("%d\n", B);
//}

//#include<stdio.h>
//
////ö�ٳ���
////ö�٣�һһ�о�
//
////�Զ�������,��ɫ
////ö������
//enum color
//{
//	//ö�����������е�ֵ��ö�ٳ���
//	red,   //0
//	green, //1
//	blue   //2
//};
//
//int main() {
//	enum color a = red;
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>  //�ַ���ͷ�ļ�
//
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//
//	/*printf("%s\n", arr1);
//	printf("%s", arr2);*/
//
//	//strlen��һ���⺯�������ַ������ȵ�, ͳ�Ƶ����ַ�����\0֮ǰ���ַ�����
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("c:\\code\\test.c\\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //����1������Ļ�ϴ�ӡһ��������'����ô����
//    //����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//    printf("%c\n", '\'');
//    printf("%s\n", "\"");
//    return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//    return x + y;
//}
///*C���Է��ע��
//int Sub(int x, int y)
//{
//    return x-y;
//}
//*/
//int main()
//{
//    //C++ע�ͷ��
//    //int a = 10;
//    //����Add��������ɼӷ�
//    printf("%d\n", Add(1, 2));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int coding = 0;
//    printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("��֣�����к�offer\n");
//    }
//    else
//    {
//        printf("�������ؼ�������\n");
//    }
//    return 0;
//}

//whileѭ����ʵ��
//#include <stdio.h>
//int main()
//{
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("��Ҫ����Ŭ���ô���\n");
//    }
//    if (line > 20000)
//        printf("��offer\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("��������������:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);
//    return 0;
//}
//// �������룬д�ɺ������£�
//#include <stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("��������������:>");
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum = %d\n", sum);
//    return 0;
//}
