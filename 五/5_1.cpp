//输入一个大于等于2且小于10的整数n，定义一个二维整型数组（n×n）,初始化该数组，将数组中最大元素所在的行和最小元素所在的行对调。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[15][15];
void line_exchange(int arr[][15], int n) {
    int i, j, max[15], min[15], a = 0, b = 0, temp;
    for (int i = 0; i < n; i++) {
        max[i] = arr[i][0];
        min[i] = arr[i][0];
        for (int j = 1; j < n; j++) {
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
            if (arr[i][j] < min[i]) {
                min[i] = arr[i][j];
            }
        }
    }
    for (int i = 1; i < n; i++) {
        if (max[i] > max[a]) {                      //找出最大值所在的行---注意要与常量max[a]比较，不能用max[i]与max[i+1]比较，这样就一直变了！！！！！！
            a = i;
        }
        if (min[i] < min[b]) {                      //问题同上，不能用min[i]与min[i+1]比！！！！！！
            b = i;
        }
    }
    if (a != b) {
        for (int i = 0; i < n; i++) {
            temp = arr[a][i];
            arr[a][i] = arr[b][i];
            arr[b][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                printf("%d\n", arr[i][j]);
            }
            else {
                printf("%d ", arr[i][j]);
            }
        }
    }
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    line_exchange(arr, n);
    return 0;
