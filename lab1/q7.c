#include <stdio.h>

struct Student {
    int rollNumber;
    char name[100];
    float marksC;
    float marksMath;
    float marksPhysics;
};

int main() {
    struct Student s;
    float totalMarks, averageMarks;

    scanf("%d", &s.rollNumber);
    scanf(" %[^\n]", s.name);
    scanf("%f", &s.marksC);
    scanf("%f", &s.marksMath);
    scanf("%f", &s.marksPhysics);

    totalMarks = s.marksC + s.marksMath + s.marksPhysics;
    averageMarks = totalMarks / 3.0;

    printf("%.2f\n", totalMarks);
    printf("%.2f\n", averageMarks);

    return 0;
}