#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    double price;
    int quantity;

public:
    Item() {
        name = "";
        price = 0.0;
        quantity = 0;
    }

    Item(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void input() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }

    Item operator+(Item other) {
        if (name == other.name && price == other.price) {
            Item temp;
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + other.quantity;
            return temp;
        } else {
            cout << "\nError: Cannot combine items with different names or prices." << endl;
            Item empty;
            return empty;
        }
    }

    void display() {
        if (name != "") {
            cout << "Item: " << name << " | Price: " << price 
                 << " | Combined Quantity: " << quantity << endl;
        }
    }
};

int main() {
    Item item1, item2;

    cout << "Enter details for Item 1:" << endl;
    item1.input();

    cout << "\nEnter details for Item 2:" << endl;
    item2.input();

    Item combined = item1 + item2;

    cout << "\nResult:" << endl;
    combined.display();

    return 0;
}