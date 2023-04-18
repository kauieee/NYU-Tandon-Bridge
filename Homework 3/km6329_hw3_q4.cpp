#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){

    double num, fractionalPart;
    int userChoice;

    // Getting inputs from the user
    cout << "Please enter a Real number: " << endl;
    cin >> num;

    cout << "Choose	your rounding method:" << endl
         << "1. Floor round" << endl
         << "2. Ceiling round" << endl
         << "3. Round to the nearest whole number" << endl;
    cin >> userChoice;

    fractionalPart = num - (int)num;

    switch(userChoice) {
        
        case FLOOR_ROUND:
            if (fractionalPart == 0 || num >= 0){
                cout << (int)num << endl;
            } else {
                cout << (int)num - 1 << endl;
            }
            break;
        
        case CEILING_ROUND:
            if (fractionalPart == 0 || num <= 0){
                cout << (int)num << endl;
            } else {
                cout << (int)num + 1 << endl;
            }
            break;
        
        case ROUND:
            if (num >= 0){
                if (fractionalPart < 0.50){
                    cout << (int)num << endl;
                } else {
                    cout << (int)num + 1 << endl;
                }
            } else {
                if (fractionalPart > -0.50){
                    cout << (int)num << endl;
                } else {
                    cout << (int)num - 1 << endl;
                }
            }
            break;
        
        default:
            cout << "Please enter a valid choice" << endl;
            break;
    }

    return 0;

}