//求三位数水仙花数
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, a, b, c;
    for (i = 100; i < 1000; i++) {
        c = i % 10;
        b = (i / 10) % 10;
        a = i / 100;
        if (i == a * a * a + b * b * b + c * c * c)
            printf("%d ", i);
    }
    return 0;
