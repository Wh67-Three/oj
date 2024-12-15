#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int SubStr_Count(char* s1, char* s2) {
	int m=0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1<len2)
		m = 0;
	else {
		for (int i = 0; i <= len1 - len2; i++) {
			int j = 0;//在外面定义，好用于判断运行了多少
			for (j=0; j < len2; j++) {
				if (s1[i + j] != s2[j])
					break;
			}
			if (j == len2)
				m++;
		}
	}
	return m;
}
int main() {
	int num;
	char a[10000005], b[10000005];
	scanf("%s", a);
	scanf("%s", b);
	num=SubStr_Count(a, b);
	printf("%d", num);
	return 0;
}
