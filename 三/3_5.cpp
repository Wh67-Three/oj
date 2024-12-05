//求满足下面条件的四位数：该数是一个完全平方数，且千位和十位数字之和为10，百位和个位数字之积位12。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int i, j, a, b, c, d;
    for (i = 32; i < 100; i++) {
        j = i * i;
        d = j % 10;
        c = j / 10 % 10;
        b = j / 100 % 10;
        a = j / 1000;
        if (a + c == 10 && b * d == 12)
            printf("%d ", j);
    }
    return 0;
}
