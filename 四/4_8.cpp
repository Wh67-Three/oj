//数组元素统计
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[10000];
void numbers_statistics(int arr[], int n) {
    int i, j, temp, num[10000] = { 0 }, count[10000] = { 0 };
    int uniqueCount = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            num[uniqueCount] = arr[i];
            count[uniqueCount] = 1;
            uniqueCount++;
        }
        else {
            count[uniqueCount - 1]++;                                      //统计相同元素的个数,牛逼，一行代码搞定  注意-1
        }
    }

    for (j = 0; j < uniqueCount; j++) {
        printf("%d %d\n", num[j], count[j]);
    }
}
int main() {
    int n, arr[10000], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    numbers_statistics(arr, n);
    return 0;
}
