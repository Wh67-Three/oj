#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[15], b[15];
	scanf("%s", a);
	scanf(" %s", b);
	int q = 2;
	int lena = strlen(a);
	int lenb = strlen(b);
	if (lena != lenb) {
		q = 1;
	}
	else {
		for (int i = 0; i < lena; i++)
			if (a[i] == b[i] + 32 || a[i] == b[i] - 32) {
				q = 3;
			}
			else {
				if (a[i] != b[i]) {
					q = 4;
					break;
				}
			}
	}
	printf("%d", q);
	return 0;
}