#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	void swap(int* x, int* y);
	int a[205], b[205],n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	b[0] = n;
	swap(a, b);
	for (int i = 0; i < n; i++) {
		printf("%d ", *(b + i));
	}
}
void swap(int* x, int* y) {
	int n = y[0];             //n为x中的数的个数
	for (int i = 0; i < n; i++) {
		y[i] = x[i];
	}
	for (int i = 0; i < n-1; i++) {
		int temp;
		for (int k = 0; k < n - i - 1; k++) {
			if (y[k] > y[k + 1]) {
				temp = y[k];
				y[k] = y[k+1];
				y[k + 1] = temp;
			}
		}
	}
}
