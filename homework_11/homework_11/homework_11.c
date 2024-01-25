#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数。
//比如： 15    00001111    4 个 1

//15%2=1
//15/2=7
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
int count_num_of_1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);//-1
	int ret = count_num_of_1(num);
	printf("%d\n", ret);

	return 0;
}