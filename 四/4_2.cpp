//数组插数--有一个已排好序的9个元素的数组，现在输入一个数，要求按照原来排序的规则将它插入数组中。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int arr[10], i, num, pos, n = 9;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    if (arr[0] <= arr[8]) {
        pos = 0;
        while (pos < n && arr[pos] < num) {
            pos++;
        }
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = num;
        for (i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        pos = 0;
        while (pos < n && arr[pos] > num) {
            pos++;
        }
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = num;
        for (i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
