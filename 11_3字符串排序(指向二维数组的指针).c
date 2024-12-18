#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
void sort(char(*arr)[105]) {
	char m[105];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (strcmp(*(arr + j),*(arr + j + 1)) > 0) {
				strcpy(m, arr[j + 1]);
				strcpy(arr[j + 1], arr[j]);
				strcpy(arr[j], m);
			}
		}
	}
}
int main() {
	int n = 10;
	char arr[10][105];
	for (int i = 0; i < 10; i++) {
		scanf("%s", arr + i);
	}
	char (* m)[105] = arr;
	sort(m);
	for (int i = 0; i < 10; i++) {
		printf("%s ", *(m+i));
	}
	return 0;
}
