#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}


#include <stdio.h>

int main() {
    char arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%c", &arr[i]);
        if ((int)(arr[i]) >= 65 && (int)(arr[i]) <= 90) {
            printf("%c", ((int)(arr[i]) + 32));
        }
        else {
            printf("%c", ((int)(arr[i]) - 32));
        }
    }
    return 0;
}