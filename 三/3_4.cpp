//�����ֱ�дһ���������200��300֮������������������������������������λ�ϵ���֮��Ϊ42��2��Ϊ10
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
