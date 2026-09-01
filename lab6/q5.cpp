#include<iostream>
using namespace std;

int main(){
    int visitors[5];
    cout << "Enter 5 initial visitor numbers: \n";
    for(int i=0; i<5; i++){
        cin >> visitors[i];
  }
  cout<< "Visitor numbers before update: \n";
  for(int i=0; i<5; i++){
    cout << *(visitors + i) << " ";
  }
  cout << endl;

    int pos, newVisitorNo;
    cout<< "Enter position to update (0 to 4): ";
    cin >> pos;
    cout << "Enter new visitor number: ";
    cin >> newVisitorNo;
    *(visitors + pos) = newVisitorNo;
    cout << "Visitor numbers after update: \n";
    for(int i=0; i<5; i++){
        cout << *(visitors + i) << " ";
    }
    cout<<endl;
    return 0;
}