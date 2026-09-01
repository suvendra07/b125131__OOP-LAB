#include <iostream>
using namespace std;

void adjustScores(int *scores, int n) {
    for (int i = 0; i < n; i++) {
        *(scores + i) += 10;
    }
}
int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    int *scores = new int[n];

    cout << "Enter scores of " << n << " players: \n";
    for (int i = 0; i < n; i++) {
        cin >> *(scores + i);
    }
    cout << "\nScores before adjustment: \n";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;
    adjustScores(scores, n);

    cout << "Scores after adjustment (+10): \n";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;

    delete[] scores;
    return 0;
}