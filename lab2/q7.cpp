#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    int quantityAvailable;
    double pricePerUnit;
public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productId;
        cin.ignore(); 
        
        cout << "Enter Product Name: ";
        getline(cin, productName);  
        cout << "Enter Available Quantity: ";
        cin >> quantityAvailable;
        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
    }
    void displayDetails() const {
        cout << "\n===================================" << endl;
        cout << "         PRODUCT DETAILS           " << endl;
        cout << "===================================" << endl;
        cout << "Product ID         : " << productId << endl;
        cout << "Product Name       : " << productName << endl;
        cout << "Quantity Available : " << quantityAvailable << endl;
        
        cout << fixed << setprecision(2);
        cout << "Price Per Unit     : $" << pricePerUnit << endl;
        cout << "===================================" << endl;
    }
    void sellUnits(int quantityToSell) {
        if (quantityToSell <= 0) {
            cout << "\nError: Invalid quantity entered!" << endl;
        } 
        else if (quantityToSell > quantityAvailable) {
            cout << "\nError: Not enough stock available!" << endl;
            cout << "Requested: " << quantityToSell 
                 << " | Available: " << quantityAvailable << endl;
        } 
        else {
            quantityAvailable -= quantityToSell;
            cout << "\nSale Successful! " << quantityToSell << " unit(s) sold." << endl;
            cout << "Remaining Stock: " << quantityAvailable << endl;
        }
    }
    void displayInventoryValue() const {
        double totalValue = quantityAvailable * pricePerUnit;
        
        cout << fixed << setprecision(2);
        cout << "\n-----------------------------------" << endl;
        cout << "Total Inventory Value for " << productName << ": $" << totalValue << endl;
        cout << "-----------------------------------" << endl;
    }
};
int main() {
    Product prod;
    cout << "--- Enter Product Information ---" << endl;
    prod.acceptDetails();
    prod.displayDetails();
    prod.displayInventoryValue();
    int sellAmount;
    cout << "\nEnter quantity to sell: ";
    cin >> sellAmount;
    prod.sellUnits(sellAmount);
    prod.displayDetails();
    prod.displayInventoryValue();

    return 0;
}