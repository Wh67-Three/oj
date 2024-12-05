//输入一个3×4的整型数组，求出每一行的最大值之和。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[3][4];
void max_sum(int arr[3][4]) {
    int i, j, max[3], sum = 0;
    for (int i = 0; i < 3; i++) {
        max[i] = arr[i][0];
        for (int j = 1; j < 4; j++) {
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        sum += max[i];
    }
    printf("%d", sum);
}
int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    max_sum(arr);
    return 0;
}
