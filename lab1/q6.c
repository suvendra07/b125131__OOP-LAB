#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, total;

    scanf("%d %d", &d1.feet, &d1.inches);
    scanf("%d %d", &d2.feet, &d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    printf("%d\n", total.feet);
    printf("%d\n", total.inches);

    return 0;
}