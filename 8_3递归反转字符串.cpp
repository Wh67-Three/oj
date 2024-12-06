//觉得太sb了，就换了个指针


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char arr[1005];
	scanf("%s", arr);
	int len = strlen(arr);
	char *p = arr;
	for (int i = 0; i < len; i++) {
		printf("%c", *(p+len-1));
		p--;
	}
return 0;
}

//还是再用递归做一遍吧，别再考到，
//下为递归

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse_string(char* str, int start, int end) {
	if (start >= end) {
		return;
	}
	char temp=str[start];
str[start]=str[end];
str[end]=temp;
reverse_string(str, start + 1, end - 1);
}
int main() {
char str[100];
scanf("%s", str);
int len = strlen(str);
reverse_string(str, 0, len - 1);
printf("%s", str);
return 0;
}
