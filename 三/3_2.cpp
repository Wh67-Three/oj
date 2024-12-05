//计算某年某月天数
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n, y;
    scanf("%d %d", &n, &y);
    if (y != 2) {
        switch (y) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("31"); break;
        default:printf("30");
        }
    }
    else {
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
            printf("29");
        else
            printf("28");
    }

    return 0;
}
