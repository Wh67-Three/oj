#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main() {
	char a;
	char str[100];
	scanf("%s", str);
	scanf(" %c", &a);
	int len = strlen(str);
	printf("%s\n", str);
	for (int i = 0; i < len; i++) {
		if (str[i] != a)
			printf("%c", str[i]);
	}
	return 0;
}