//实现一个简单的英文字母加密程序(确保输入的是英文字符)，用该字母后第5个字母加密，大小写对应。如果超过Z / z，则回头从A / a继续向后数。
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
