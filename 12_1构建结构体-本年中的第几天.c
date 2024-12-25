#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Date {
	int year;
	int month;
	int day;
};
int  leap_year(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 1;
	}
	return 0;
}
int day_of_year(struct Date date) {
	int days_in_month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (leap_year(date.year)) {
		days_in_month[1]=29;
	}
	int day_count = 0;
	for (int i = 0; i < date.month - 1; i++) {
		day_count += days_in_month[i];
	}
	day_count += date.day;
	return day_count;
}
int main(){
	struct Date date;
	scanf("%d %d %d", &date.year, &date.month, &date.day);
	int date_number = day_of_year(date);
	printf("%d", date_number);
	return 0;
}
