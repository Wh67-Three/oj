#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student_grades {
	int  number;
	char name[20];
	int grade1;
	int grade2;
	int grade3;
};
void input(struct Student_grades *student) {
	scanf("%d %s %d %d %d", &student->number, student->name, &student->grade1, &student->grade2, &student->grade3);
}
void print(struct Student_grades student) {
	printf("%d,%s,%d,%d,%d\n", student.number, student.name, student.grade1, student.grade2, student.grade3);
}
int main() {
	struct Student_grades student[100];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		input(&student[i]);
	}
	for (int i = 0; i < N; i++) {
		print(student[i]);
	}
	return 0;
}
