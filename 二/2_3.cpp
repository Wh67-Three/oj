#define  _CRT_SECURE_NO_WARNINGS
//�ж�����
#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		printf("%d���2����29��", a);
	else
		printf("%d���2����28��", a);
	return 0;
