#include <stdio.h>

struct Employee {
    int empId;
    char name[100];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &emp[i].empId);
        scanf(" %[^\n]", emp[i].name);
        scanf("%f", &emp[i].salary);
    }

    for (i = 1; i < 5; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("%d\n", emp[maxIndex].empId);
    printf("%s\n", emp[maxIndex].name);
    printf("%.2f\n", emp[maxIndex].salary);

    return 0;
}