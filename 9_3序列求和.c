#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sum(int* total, int n) {
	for (int i = 1; i <= n; i++) {
		*total += i;
	}
}
int main() {
	int n, m=0;
	scanf("%d",&n);
	sum(&m, n);
	printf("%d", m);
}
