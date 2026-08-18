#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int orderID;
    string foodItem;
    int quantity;
    double price;
public:
    FoodOrder(int id, string item, int q, double p) : orderID(id), foodItem(item), quantity(q), price(p) {}

    friend void calculateBill(const FoodOrder& order);
};
void calculateBill(const FoodOrder& order) {
    double totalBill = order.quantity * order.price;
    cout << "Order ID: " << order.orderID << "\nFood Item: " << order.foodItem 
         << "\nQuantity: " << order.quantity << "\nPrice per item: " << order.price 
         << "\nTotal Bill: $" << totalBill << endl;
}

int main() {
    FoodOrder order1(501, "Burger", 3, 5.50);
    calculateBill(order1);
    return 0;
}