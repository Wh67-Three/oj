#define  _CRT_SECURE_NO_WARNINGS
//����һ���ַ���������Ǵ�д��ĸ�������Ӧ��Сд��ĸ���������Сд��ĸ�������Ӧ�Ĵ�д��ĸ������ԭ�������
#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%c", a - 32);
    else if (a >= 'A' && a <= 'Z')
        printf("%c", a + 32);
    else
        printf("%c", a);
    return 0;
