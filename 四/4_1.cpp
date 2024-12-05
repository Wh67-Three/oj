//数组循环右移m位
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[1000], temp[1000];
void ring_shift_right(int a[], int n, int m) {
    int i;
    for (i = 0; i < n; i++)
        temp[(i + m) % n] = a[i];                   //牛逼
    for (i = 0; i <= n; i++) {
        a[i] = temp[i];
    }

}
int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    ring_shift_right(a, n, m);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
