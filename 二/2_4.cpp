#define  _CRT_SECURE_NO_WARNINGS
//输入一个字符，如果它是大写字母，输出相应的小写字母；如果它是小写字母，输出相应的大写字母；否则，原样输出。
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
