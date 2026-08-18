#include <iostream>
#include <string>
using namespace std;

class Diary {
private:
    string ownerName;
    int numEntries;
    string lastEntry;
public:
    Diary(string name, int entries, string last) 
        : ownerName(name), numEntries(entries), lastEntry(last) {}

    friend void displayDiary(const Diary& d);
};
void displayDiary(const Diary& d) {
    cout << "Owner: " << d.ownerName << "\nEntries: " << d.numEntries 
         << "\nLast Entry: " << d.lastEntry << endl;
}

int main() {
    Diary myDiary("Aladin", 15, " Trapped inside the cave.");
    displayDiary(myDiary);
    return 0;
}