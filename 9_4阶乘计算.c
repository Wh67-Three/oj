#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f(int* total, int n) {
	for (int i = 1; i <= n; i++) {
		*total *= i;
	}
}
int main() {
	int n, m=1;
	scanf("%d",&n);
	f(&m, n);
	printf("%d", m);
}
