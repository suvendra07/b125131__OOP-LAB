#include <iostream>
using namespace std;

void findHighestPrice(float *ptr, int size) {
    float maxPrice = *ptr;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > maxPrice) {
            maxPrice = *(ptr + i);
        }
    }
    cout <<"Highest Price: "<< maxPrice << endl;
}
int main() {
    float prices[7];
    cout << "Enter prices of 7 products:\n";
    for (int i = 0; i < 7; i++) {
        cin >> prices[i];
    }
    findHighestPrice(prices, 7);
    return 0;
}