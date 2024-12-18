#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int reverse_num(int* pNumber, int n){
	int number = *pNumber;
	int reserve_number = 0;
	int temp = number;
	for (int i = 0; i < n; i++) {
		reserve_number = reserve_number * 10 + temp % 10;
		temp /= 10;
	}
	if (number*9== reserve_number) {
		return number;
	}
	else {
		return 0;
	}
}
int main() {
	int N, j=0;
	scanf("%d", &N);
	if (N <= 0 || N >= 10) {
		printf("There's no reverse number");
		return 0;
	}
	int  i = (int)pow(10, N - 1);
	long long max = (long long)pow(10, N);
	for (; i<max; i++) {long long m=0;
	if((i/(max/10))<2){              //当n的第一位数>1的时候就不用判断了，（因为n*9就不是N位数了）
		 m = reverse_num(&i, N);
	}
	else{
		m=0;
	}
		if (m) {
			if (j == 0) {
				printf("The reverse number is:\n");
				j = 1;
			}
			printf("%lld\n", m);//放外面就一句，要是放里面得写两句。
		}
	}
	if (j == 0) {
		printf("There's no reverse number");
	}
	return 0;
}
