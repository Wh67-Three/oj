//在数组中查找指定元素
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1000];
int main() {
    int n, i, j, pos = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &j);
    for (i = 0; i < n; i++) {
        if (arr[i] == j) {
            pos = i;
            break;                              //找到了，学习学习！！
        }
    }
    if (pos == -1)
        printf("not found");
    else printf("%d", pos);
    return 0;
}
