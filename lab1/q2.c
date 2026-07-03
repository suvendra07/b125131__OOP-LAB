#include <stdio.h>

struct Employee {
    int empId;
    char name[100];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d", &emp[i].empId);
        scanf(" %[^\n]", emp[i].name);
        scanf("%f", &emp[i].salary);
    }

    for (i = 0; i < 3; i++) {
        printf("%d\n", emp[i].empId);
        printf("%s\n", emp[i].name);
        printf("%.2f\n", emp[i].salary);
    }

    return 0;
}