#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNumber;
    char name[100];
    struct Date dob;
};

int main() {
    struct Student s;

    scanf("%d", &s.rollNumber);
    scanf(" %[^\n]", s.name);
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("%d\n", s.rollNumber);
    printf("%s\n", s.name);
    printf("%02d/%02d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}