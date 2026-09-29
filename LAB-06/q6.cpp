#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    Counter(int c) {
        count = c;
    }

    void input() {
        cout << "Enter initial counter value: ";
        cin >> count;
    }

    Counter operator++() {
        count = count + 1;
        Counter temp;
        temp.count = count;
        return temp;
    }

    Counter operator++(int) {
        Counter temp;
        temp.count = count;
        count = count + 1;
        return temp;
    }

    void display() {
        cout << "Counter value: " << count << endl;
    }
};

int main() {
    Counter c;
    c.input();

    cout << "\n--- Prefix Increment (++c) ---" << endl;
    cout << "Before ++c: ";
    c.display();
    Counter c_pre = ++c;
    cout << "After ++c: ";
    c.display();
    cout << "Returned object: ";
    c_pre.display();

    cout << "\n--- Postfix Increment (c++) ---" << endl;
    cout << "Before c++: ";
    c.display();
    Counter c_post = c++;
    cout << "After c++: ";
    c.display();
    cout << "Returned object: ";
    c_post.display();

    return 0;
}