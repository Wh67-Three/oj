//数组求和、最大值、最小值
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[10005];
void find_max(int a[], int n) {
    int max = a[0], i;
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    printf("%d\n", max);

}
void find_min(int a[], int n) {
    int min = a[0], i;
    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    printf("%d\n", min);
}
void find_sum(int a[], int n) {
    int i = 0, sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%d\n", sum);
}
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    find_max(a, n);
    find_min(a, n);
    find_sum(a, n);
    return 0;
}
