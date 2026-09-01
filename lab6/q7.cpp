#include <iostream>
using namespace std;

int main() {
    char sentence[200];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);

    char *ptr = sentence;
    int uppercaseCount = 0, lowercaseCount = 0, spaceCount = 0;
    while (*ptr != '\0') {
        if (isupper(*ptr)) {
            uppercaseCount++;
        } else if (islower(*ptr)) {
            lowercaseCount++;
        } else if (*ptr == ' ') {
            spaceCount++;
        }
        ptr++;
    }
    cout << "Uppercase letters: " << uppercaseCount << endl;
    cout << "Lowercase letters: " << lowercaseCount << endl;
    cout << "Spaces: " << spaceCount << endl;

    return 0;
}