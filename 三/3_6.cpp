//ʵ��һ���򵥵�Ӣ����ĸ���ܳ���(ȷ���������Ӣ���ַ�)���ø���ĸ���5����ĸ���ܣ���Сд��Ӧ���������Z / z�����ͷ��A / a�����������
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (a >= 'A' && a <= 'U')
        printf("%c", a + 5);
    else if (a > 'U' && a <= 'Z')
        printf("%c", a - 21);
    else if (a >= 'a' && a <= 'u')
        printf("%c", a + 5);
    else if (a > 'u' && a <= 'z')
        printf("%c", a - 21);
    return 0;
}
