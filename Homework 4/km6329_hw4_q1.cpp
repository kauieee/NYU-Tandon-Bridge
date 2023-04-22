#include <iostream>
using namespace std;

int main() {

    int n;
    int counter = 1;
    int evenNumber;

    cout << "Please enter a positive integer: ";
    cin >> n;

    cout << "section a" << endl;

    while(counter <= n){

        evenNumber = 2 * counter;
        cout << evenNumber << endl;
        counter++;

    }

    cout << endl << "section b" << endl;

    for (int counter = 1; counter <= n; counter++){
        evenNumber = 2 * counter;
        cout << evenNumber << endl;
    }

    return 0;
}