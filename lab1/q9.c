#include <stdio.h>

struct Student {
    int rollNumber;
    char name[100];
    float cgpa;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &s[i].rollNumber);
        scanf(" %[^\n]", s[i].name);
        scanf("%f", &s[i].cgpa);
    }

    for (i = 0; i < 5; i++) {
        if (s[i].cgpa >= 8.0) {
            printf("%d\n", s[i].rollNumber);
            printf("%s\n", s[i].name);
            printf("%.2f\n", s[i].cgpa);
        }
    }

    return 0;
}