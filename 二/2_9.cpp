#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const int N = 1000;
int max = 0;
void find_max(int arr[N], int n) {
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
}



int main() {
    int n;
    scanf("%d", &n);
    int arr[N];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    find_max(arr, n);
    printf("%d\n", max);
    return 0;
}
