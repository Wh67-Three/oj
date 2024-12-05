#define  _CRT_SECURE_NO_WARNINGS
//Ñ°ÕÒ×î´óÖµ
#include <stdio.h>
const int N = 1005;
int A = 0, B = 0, C = 0, D = 0, E = 0;
void grade_distribution(int scores[N], int n) {
    for (int i = 0; i < n; i++) {
        if (scores[i] >= 90) A++;
        else if (scores[i] >= 80) B++;
        else if (scores[i] >= 70) C++;
        else if (scores[i] >= 60) D++;
        else E++;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int scores[N];
    for (int i = 0; i < n; i++)
        scanf("%d", &scores[i]);
    grade_distribution(scores, n);
    printf("%d %d %d %d %d", A, B, C, D, E);
    return 0;
