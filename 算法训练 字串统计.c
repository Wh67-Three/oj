#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
	char s[1000], c[100], r[100];//母串，动态字串，结果字串
	int len;//母串长度
	int n;//最小字串长度
	int i, j;//循环变量
	int ans = 0;//当前最大出现次数
	int t;//当前子串出现次数
	int m;//当前字串长度
	scanf("%d", &n);
	scanf("%s", s);
	len = strlen(s);
	for (m = n; m <= len / 2 || m == n; m++) {//注意m==n这个条件
		char* p = s;
		i = len - m - 1;
		while (i--) {
			strncpy(c, p++, m);
			c[m] = '\0';
			t = 0;
			char* q = s;//上一次的p指针到后面了
			j = len - m - 1;
			while (j--) {
				if (!strncmp(c, q++, m)) {
					t++;
				}
			}
			if (t > ans || (t == ans && m > strlen(r))) {
				ans = t;
				strcpy(r, c);
			}
		}
	}
	printf("%s\n", r);
	return 0;
}
