#include <stdio.h>
#include <string.h>
#define  _CRT_SECURE_NO_WARNINGS
void f(int n) {
	if (n == 1) {
		printf("%c", 'A');
	}
	else {
		f(n - 1);
		printf("%c", 'A' + n - 1);
		f(n - 1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}