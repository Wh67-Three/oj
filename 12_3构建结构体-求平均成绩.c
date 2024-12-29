#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student_grades {
	char  number[20];
	char name[20];
	int grade1;
	int grade2;
	int grade3;
};
int main() {
	struct Student_grades student[100];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s %s %d %d %d ", student[i].number, student[i].name, &student[i].grade1, &student[i].grade2, &student[i].grade3);
	}
	double average_grade1 = 0;
	double average_grade2 = 0;
	double average_grade3 = 0;
	int max = student[0].grade1 + student[0].grade2 + student[0].grade3;
	int temp = 0;
	for (int i = 0; i < N; i++) {
		average_grade1 += student[i].grade1;
		average_grade2 += student[i].grade2;
		average_grade3 += student[i].grade3;
		if (max < student[i].grade1 + student[i].grade2 + student[i].grade3) {
			max = student[i].grade1 + student[i].grade2 + student[i].grade3;
			temp = i;
		}
	}
	average_grade1 /= N;
	average_grade2 /= N;
	average_grade3 /= N;
	printf("%.0lf %.0lf %.0lf\n", average_grade1, average_grade2, average_grade3);
	printf("%s %s %d %d %d\n", student[temp].number, student[temp].name, student[temp].grade1, student[temp].grade2, student[temp].grade3);
	return 0;
}
