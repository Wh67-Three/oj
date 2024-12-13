#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* x, int* y) {
	int temp;
		temp = *x;
		*x = *y;
		*y = temp;
}
int main() {
	int N, M, x[1005], y[1005], a[1005];
	scanf("%d %d",&N,&M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	for(int i=0;i<M;i++){
			swap(a + x[i]-1, a +y[i]-1);
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
