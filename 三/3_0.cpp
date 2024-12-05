#define  _CRT_SECURE_NO_WARNINGS
//¼ÆËã½×³Ë
#include<stdio.h>
const int N = 25;
int jc = 1;
void find_jiecheng(int arr[N], int n) {
    jc = arr[0];
    for (int i = 1; i < n; i++)
        jc *= arr[i];

}

int main() {
    int n;
    scanf("%d", &n);
    int arr[N];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    find_jiecheng(arr, n);
    printf("%d\n", jc);
    return 0;
