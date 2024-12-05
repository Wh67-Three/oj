//йЩапеепР   (ц╟ещеепР)
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sequence_ordering(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, arr[205], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sequence_ordering(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
