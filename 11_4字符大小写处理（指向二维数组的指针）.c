#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void   convert_Sentence(char (*pStr)[200], int N) {
	int j;
	for (int i = 0; i < N; i++) {
		if (pStr[i][0] >= 'a' && pStr[i][0] <= 'z') {
			pStr[i][0] -= 32;
		}
		j = 1;
		while (pStr[i][j] != '\0') {
			if (pStr[i][j] >= 'A' && pStr[i][j] <= 'Z') {
				pStr[i][j] += 32;
			}
			j++;
		}
	}
}
int main() {
	int N;
	scanf("%d", &N);
	getchar();//去除\n防止下面只能输n-1个字符串！！
	char(*m)[200] = (char(*)[200])malloc(N * sizeof(char[200]));//学习内存分配方式！！！！
	for (int i = 0; i < N; i++) {
		gets_s(*(m + i));
	}
	convert_Sentence(m, N);
	for (int i = 0; i < N; i++) {
		printf("%s\n", m[i]);
	}
	free(m);
	return 0;
}
