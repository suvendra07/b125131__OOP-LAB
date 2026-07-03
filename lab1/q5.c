#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    scanf("%f", &r.length);
    scanf("%f", &r.breadth);

    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);

    return 0;
}