#include <stdio.h>

struct Product {
    int productId;
    char productName[100];
    float price;
    int quantity;
};

int main() {
    struct Product p;
    float totalCost;

    scanf("%d", &p.productId);
    scanf(" %[^\n]", p.productName);
    scanf("%f", &p.price);
    scanf("%d", &p.quantity);

    totalCost = p.price * p.quantity;

    printf("%.2f\n", totalCost);

    return 0;
}