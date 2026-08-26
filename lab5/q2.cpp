#include<stdio.h>
using namespace std;

int findLarger(int a, int b) {
    return (a > b) ? a : b;
}
double findLarger(double x, double y) {
    return (x > y) ? x : y;
}
int findLarger(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int a = 10, b = 20, c = 30;
    double x = 5.5, y = 4.5;

    printf("Larger of %d and %d: %d\n", a, b, findLarger(a, b));
    printf("Larger of %.1f and %.1f: %.1f\n", x, y, findLarger(x, y));
    printf("Largest of %d, %d and %d: %d\n", a, b, c, findLarger(a, b, c));
    return 0;
}