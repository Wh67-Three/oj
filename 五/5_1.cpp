//����һ�����ڵ���2��С��10������n������һ����ά�������飨n��n��,��ʼ�������飬�����������Ԫ�����ڵ��к���СԪ�����ڵ��жԵ���
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
        if (max[i] > max[a]) {                      //�ҳ����ֵ���ڵ���---ע��Ҫ�볣��max[a]�Ƚϣ�������max[i]��max[i+1]�Ƚϣ�������һֱ���ˣ�����������
            a = i;
        }
        if (min[i] < min[b]) {                      //����ͬ�ϣ�������min[i]��min[i+1]�ȣ�����������
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
