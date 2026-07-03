#include <stdio.h>

struct Book {
    int bookId;
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book b;

    scanf("%d", &b.bookId);
    scanf(" %[^\n]", b.title);
    scanf(" %[^\n]", b.author);
    scanf("%f", &b.price);

    printf("%d\n", b.bookId);
    printf("%s\n", b.title);
    printf("%s\n", b.author);
    printf("%.2f\n", b.price);

    return 0;
}