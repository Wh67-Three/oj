#define  _CRT_SECURE_NO_WARNINGS
//输出斐波那契数列的第n项
#include <stdio.h>
int main() {
    int n, i, a = 0, b = 0, c = 1, d = 0, sum = 1;
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("0");
        break;
    case 2:
        printf("0");
        break;
    case 3:printf("1");
        break;
    default:
        for (i = 4; i <= n; i++) {
            d = a + b + c;
            sum += d;
            a = b;
            b = c;
            c = d;
        }
        printf("%d", sum);
        break;
    }
    return 0;
