#define  _CRT_SECURE_NO_WARNINGS
//�ж��������Ƿ�Ϸ�������������ܳ�
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c,s;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
        printf("area: %.2lf\nperimeter: %.2lf",sqrt( s * (s - a) * (s - b) * (s - c)), 2 * s);
    else
        printf("These sides do not correspond to a valid triangle");
    return 0;
}
