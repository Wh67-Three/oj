//找数字编写一个程序，求出200到300之间满足以下条件的所有正整数：①三个数位上的数之积为42。2和为10
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, a, b, c;
    for (i = 200; i < 300; i++) {
        c = i % 10;
        b = (i / 10) % 10;
        a = i / 100;
        if (a + b + c == 12 && a * b * c == 42)
            printf("%d\n", i);
    }
    return 0;
}
