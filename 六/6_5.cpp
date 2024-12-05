#include<stdio.h>
int length(char* p) {
	int len = 0;
	while (*p != '\0') {
		len++, p++;
	}
	return len;
}
int main() {
	char arr[100];
	scanf("%s", arr);
	char* p = arr;
	int len=length(p);
	printf("%d", len);
	return 0;
}

