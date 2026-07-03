#include <stdio.h>

struct Student {
    int rollNumber;
    char name[100];
    int age;
    float cgpa;
};

int main() {
    struct Student s;

    scanf("%d", &s.rollNumber);
    scanf(" %[^\n]", s.name);
    scanf("%d", &s.age);
    scanf("%f", &s.cgpa);

    printf("%d\n", s.rollNumber);
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%.2f\n", s.cgpa);

    return 0;
}