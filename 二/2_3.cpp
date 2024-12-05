#define  _CRT_SECURE_NO_WARNINGS
//判断闰年
#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		printf("%d年的2月有29天", a);
	else
		printf("%d年的2月有28天", a);
	return 0;
