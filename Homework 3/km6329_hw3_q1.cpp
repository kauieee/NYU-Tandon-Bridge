#include <iostream>
using namespace std;

const double CLUB_CARD_OFFER = 10.0;

int main(){

    double firstItemPrice,secondItemPrice;
    char hasClubCard;
    double taxRate;
    double basePrice;
    double priceAfterBuyOneGetOneOff;
    double totalPriceAfterDiscounts;
    double finalPriceAfterTax;

    // Getting inputs from the user
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
        totalPriceAfterDiscounts =  priceAfterBuyOneGetOneOff - (priceAfterBuyOneGetOneOff * (CLUB_CARD_OFFER/100));
    } else if (hasClubCard == 'N' || hasClubCard == 'n') {
        totalPriceAfterDiscounts = priceAfterBuyOneGetOneOff;
    }

    // Adding tax to the total price after discounts
    finalPriceAfterTax = totalPriceAfterDiscounts + (totalPriceAfterDiscounts * (taxRate / 100));

    // Setting the precision of the base price and the price after discounts to 1
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << "Base price: " << basePrice << endl;
    cout  << "Price after discounts: " << totalPriceAfterDiscounts << endl;
    
    // Setting the precision of the final price after tax to 5
    cout.precision(5);

    cout << "Total price: " << finalPriceAfterTax << endl;

    return 0;

}