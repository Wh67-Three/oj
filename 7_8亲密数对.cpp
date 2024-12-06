#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number(int a) {
	int sum = 0;
	for (int i = 1; i <a; i++) {
		if (a % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int x;
	scanf("%d", &x);
	for (int a = 2; a < x; a++) {
		int b = number(a);
		if (b > a && b < x&& number(b) == a) {
				printf("%d %d\n", a, b);			
		}
	}
	return 0;
}


/*错误的选择：遍历n*n次，超时了，而上面的仅需n次简短！！！！
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number(int a,int b){
	int  a1[1005], b1[1005], suma = 0, sumb = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			suma += i;
		}
	}
	for (int i = 1; i < b; i++) {
		if (b % i == 0) {
			sumb += i;
		}
	}
	return ((suma ==b)&&( sumb==a));
}
int main(){
	int n,q;
	scanf("%d", &n);
	for (int i = 0; i < n; i+2) {
		for (int j = i+1; j < n; j+2) {
			q = number(i, j);
		if(number(i,j))
			printf("%d %d\n",i,j);
		}
	}
		
}
*/
