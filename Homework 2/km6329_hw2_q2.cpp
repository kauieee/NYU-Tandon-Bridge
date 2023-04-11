#include<iostream>
using namespace std;

const int CENTS_IN_A_QUARTER = 25;
const int CENTS_IN_A_DIME = 10;
const int CENTS_IN_A_NICKEL = 5;
const int CENTS_IN_A_PENNY = 1;

int main(){

    int dollars, cents, quarters, dimes, nickels, pennies, totalCents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars >> cents;

    totalCents = (dollars * 100) + cents;

    quarters = totalCents / CENTS_IN_A_QUARTER;
    totalCents -= (quarters * CENTS_IN_A_QUARTER);

    dimes = totalCents / CENTS_IN_A_DIME;
    totalCents -= (dimes * CENTS_IN_A_DIME);

    nickels = totalCents / CENTS_IN_A_NICKEL;
    totalCents -= (nickels * CENTS_IN_A_NICKEL);

    pennies = totalCents;

    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;

}