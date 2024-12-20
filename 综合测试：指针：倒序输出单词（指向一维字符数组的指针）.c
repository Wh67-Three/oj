#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void reserve_word(char* arr) {
	char* temp = (char*)malloc(1000 * sizeof(char));
	if (temp == NULL) {
		fprintf(stderr, "内存分配失败\n");
		return;
	}
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		temp[i] = arr[len - 1 - i];
	}
	temp[len] = '\0';
	strcpy(arr, temp);
	free(temp);
}
int main() {
	char arr[1000];
	if (fgets(arr, 1000, stdin) == NULL) {
		return 0;
	}
	reserve_word(arr);
	printf("%s", arr);
}
