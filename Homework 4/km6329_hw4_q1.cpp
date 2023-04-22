#include <iostream>
using namespace std;

int main() {

    int n;
    int counter = 1;
    int evenNumber;

    cout << "Please enter a positive integer: ";
    cin >> n;

    cout << "Section A" << endl;

    while(counter <= n){

        evenNumber = 2 * counter;
        cout << evenNumber << endl;
        counter++;

    }

    cout << "Section B" << endl;

    for (int counter = 1; counter <= n; counter++){
        evenNumber = 2 * counter;
        cout << evenNumber << endl;
    }

    return 0;
}