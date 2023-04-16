#include <iostream>
using namespace std;

int main(){

    double firstItemPrice;
    double secondItemPrice;
    char hasClubCard;
    double taxRate;
    double basePrice;
    double priceAfterBuyOneGetOneOff;
    double totalPriceAfterDiscounts;
    double clubCardOff = 10.0;
    double finalPriceAfterTax;

    // Getting input from the user
    cout << "Enter price of first item: ";
    cin >> firstItemPrice;

    cout << "Enter price of second item: ";
    cin >> secondItemPrice;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> hasClubCard;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    basePrice = firstItemPrice + secondItemPrice;

    // Halving the cost of the lower priced item
    if (firstItemPrice < secondItemPrice) {
        firstItemPrice /= 2;
    } else {
        secondItemPrice /= 2;
    }

    priceAfterBuyOneGetOneOff = firstItemPrice + secondItemPrice;
    
    // Deducting additional 10% for club card members
    if (hasClubCard == 'Y' || hasClubCard == 'y') {
        totalPriceAfterDiscounts =  priceAfterBuyOneGetOneOff - (priceAfterBuyOneGetOneOff * (clubCardOff/100));
    } else if (hasClubCard == 'N' || hasClubCard == 'n') {
        totalPriceAfterDiscounts = priceAfterBuyOneGetOneOff;
    }

    // Adding tax to the total price after discounts
    finalPriceAfterTax = totalPriceAfterDiscounts + (totalPriceAfterDiscounts * (taxRate / 100));

    cout << "Base price: " << basePrice << endl;
    cout  << "Price after discounts: " << totalPriceAfterDiscounts << endl;
    
    // Setting the precision of the final price after tax to 5
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);

    cout << "Total price: " << finalPriceAfterTax << endl;

    return 0;

}