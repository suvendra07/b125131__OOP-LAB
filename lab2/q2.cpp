#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;
public:
    Rectangle() {
        length = 0.0;
        breadth = 0.0;
    }
    void readDimensions() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
    }
    float calculateArea() {
        return length * breadth;
    }
    float calculatePerimeter() {
        return 2 * (length + breadth);
    }
    void displayResults() {
        cout << "\n----------------------------" << endl;
        cout << "     RECTANGLE RESULTS      " << endl;
        cout << "----------------------------" << endl;
        cout << "Length    : " << length << endl;
        cout << "Breadth   : " << breadth << endl;
        cout << "Area      : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    Rectangle rect;
    rect.readDimensions();
    rect.displayResults();
    return 0;
}