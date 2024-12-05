#define  _CRT_SECURE_NO_WARNINGS
//º∆À„µÁ∑—
#include<stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    if (a <= 50)
        printf("%.2lf", a * 0.53);
    else printf("%.2lf", 50 * 0.53 + (a - 50) * 0.58);
    return 0;
