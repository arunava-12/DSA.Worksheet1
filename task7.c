#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        return 1;
    }
    return 0;
}

int countDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1];
}

int dateDifference(struct Date d1, struct Date d2) {
    int days1 = d1.day;
    int days2 = d2.day;

    for (int i = 1; i < d1.month; i++) {
        days1 += countDaysInMonth(i, d1.year);
    }
    for (int i = 1; i < d2.month; i++) {
        days2 += countDaysInMonth(i, d2.year);
    }
    days1 += (d1.year * 365) + (d1.year / 4 - d1.year / 100 + d1.year / 400);
    days2 += (d2.year * 365) + (d2.year / 4 - d2.year / 100 + d2.year / 400);

    return days2 - days1;
}

int main() {
    struct Date date1, date2;
    
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int diff = dateDifference(date1, date2);
    printf("Difference in days: %d\n", diff);

    return 0;
}
