#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product() {
        name = "";
        price = 0.0;
        quantity = 0;
    }

    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void input() {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }

    double getTotalValue() {
        return price * quantity;
    }

    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            Product temp;
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + p.quantity;
            return temp;
        } else {
            cout << "\nNote: Products have different names or prices. Returning first product." << endl;
            return *this;
        }
    }

    bool operator>(Product p) {
        if (getTotalValue() > p.getTotalValue()) {
            return true;
        } else {
            return false;
        }
    }

    void display() {
        cout << "Product: " << name << " | Price: " << price 
             << " | Quantity: " << quantity 
             << " | Total Value: " << getTotalValue() << endl;
    }
};

int main() {
    Product p1, p2;

    cout << "Enter details for Product 1:" << endl;
    p1.input();

    cout << "Enter details for Product 2:" << endl;
    p2.input();

    cout << "\n--- Value Comparison ---" << endl;
    if (p1 > p2) {
        cout << "Product 1 has a higher total value than Product 2." << endl;
    } else if (p2 > p1) {
        cout << "Product 2 has a higher total value than Product 1." << endl;
    } else {
        cout << "Both products have equal total value." << endl;
    }

    cout << "\n--- Combination Check ---" << endl;
    Product p3 = p1 + p2;
    cout << "Combined Product Details:" << endl;
    p3.display();

    return 0;
}