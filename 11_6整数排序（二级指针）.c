#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int** p, int n) {
	for (int i = 0; i < n; i++) {
		int j = 0,*temp;
		for (; j < n - i - 1; j++) {
			if (*p[j] > *p[j + 1]) {
				temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}
	}
}
int main() {
	const int n = 6;
	int* arr = (int*)malloc(n * sizeof(int));
	int** prtarr = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		prtarr[i] = &arr[i];
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(prtarr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", *prtarr[i]);
	}
	free(arr);
	free(prtarr);
	return 0;
}
