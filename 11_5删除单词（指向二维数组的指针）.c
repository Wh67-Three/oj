#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
void removeword(char arr[][10005], const int n, const char* word) {
	int wordlen = strlen(word);
	char** str = (char**)malloc(n * sizeof(char*));
	for (int i = 0; i < n; i++) {
		str[i] = (char*)malloc(10005 * sizeof(char)); // 为每个字符串分配内存
		if (str[i] == NULL) {
			fprintf(stderr, "内存分配失败\n");
			for (int j = 0; j < i; j++) {
				free(str[j]);
			}
			free(str);
			return;
		}
	}
	for (int i = 0; i < n; i++) {
		int j = 0, k = 0;
		int len = strlen(arr[i]);
		while (j < len) {
			if (strncmp(&arr[i][j], word, wordlen) == 0) {
				// 检查是否匹配到完整单词（前后为空格或标点符号）
				if ((j == 0 || isspace(arr[i][j - 1]) || ispunct(arr[i][j - 1])) &&
					(j + wordlen == len || isspace(arr[i][j + wordlen]) || ispunct(arr[i][j + wordlen]))) {
					j += wordlen;
					continue;
				}
			}
			str[i][k] = arr[i][j];
			k++;
			j++;
		}
		str[i][k] = '\0'; // 确保字符串以 null 结尾
	}

	for (int i = 0; i < n; i++) {
		strcpy(arr[i], str[i]);
		free(str[i]);
		int len = strlen(arr[i]);
		if (arr[i][len - 1] == '#')
			arr[i][len - 1] = '\0';
	}
	
	free(str);
}
char m[1005][10005];				//或者加static，总之是放在堆空间，要不然main里面的太大了
int main() {
	char** prtarr = (char**)malloc(1005 * sizeof(char*));
	if (prtarr == NULL) {
		fprintf(stderr, "内存分配失败\n");
		free(prtarr);
		return 1;
	}
	
	int i = 0, j = 0, k = 0, flag = 0, n = 0;//m--i,j  prtarr--k 
	do {
		if (fgets(m[n], 10005, stdin) == NULL) {
			free(prtarr);
			break;
		}
		int len = strlen(m[n]);
		if (len > 0 && m[n][len - 1] == '\n') {
			m[n][len - 1] = '\0';
			len--;;
		}
		flag = len > 1 && m[n][len - 1] == '#';
		n++;
	} while (!flag && n < 64);
	for (int i = 0; i < n; i++) {
		prtarr[i] = m[i];
	}
	removeword(m, n, "the");
	for (int i = 0; i < n; i++) {
		printf("%s\n", m[i]);
	}
	free(prtarr);
	return 0;
}
