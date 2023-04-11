#include<iostream>
using namespace std;

const int CENTS_IN_A_QUARTER = 25;
const int CENTS_IN_A_DIME = 10;
const int CENTS_IN_A_NICKEL = 5;
const int CENTS_IN_A_PENNY = 1;

int main(){

    int quarters, dimes, nickels, pennies, dollars, cents, totalCents;

    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    totalCents = (quarters * CENTS_IN_A_QUARTER) + (dimes * CENTS_IN_A_DIME) + (nickels * CENTS_IN_A_NICKEL) + (pennies * CENTS_IN_A_PENNY); 
    
    dollars = totalCents / 100;
    cents = totalCents % 100;

    cout << "The total is " << dollars << " dollars and " << cents << " cents" << endl;

    return 0;

}