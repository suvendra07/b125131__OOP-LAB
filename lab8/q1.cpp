#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Base character attack." << endl;
    }
};

class Warrior : public Character {
private:
    double strength;
public:
    Warrior(double s) : strength(s) {}
    void attack() override {
        double damage = 20 + 2 * strength;
        cout << "Warrior deals " << damage << " damage." << endl;
    }
};

class Archer : public Character {
private:
    double agility;
public:
    Archer(double a) : agility(a) {}
    void attack() override {
        double damage = 15 + 3 * agility;
        cout << "Archer deals " << damage << " damage." << endl;
    }
};

int main() {
    double strengthInput, agilityInput;
    
    cout << "Enter Warrior strength: ";
    cin >> strengthInput;
    cout << "Enter Archer agility: ";
    cin >> agilityInput;
    
    Warrior w(strengthInput);
    Archer a(agilityInput);
    
    w.attack();
    a.attack();
    
    return 0;
}