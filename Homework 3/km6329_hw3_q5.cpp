#include <iostream>
using namespace std;

const double METERS_IN_AN_INCH = 0.0254;
const double KILOGRAMS_IN_A_POUND = 0.453592;

int main(){

    double weightInPounds, heightInInches;
    double weightInKgs, heightInMeters;
    double bodyMassIndex;

    // Getting inputs from the user
    cout << "Please enter weight (in pounds): ";
    cin >> weightInPounds;

    cout << "Please enter height (in inches): ";
    cin >> heightInInches;

    weightInKgs = weightInPounds * KILOGRAMS_IN_A_POUND; // Unit conversion of weight from pounds to kilograms 

    heightInMeters = heightInInches * METERS_IN_AN_INCH; // Unit conversion of height from inches to meters

    bodyMassIndex = (weightInKgs / (heightInMeters * heightInMeters));

    if (bodyMassIndex < 18.5){
        cout << "The weight status is: Underweight" << endl;
    } else if (bodyMassIndex >= 18.5 && bodyMassIndex < 25){
        cout << "The weight status is: Normal" << endl;
    } else if (bodyMassIndex >= 25 && bodyMassIndex < 30){
        cout << "The weight status is: Overweight" << endl;
    } else if (bodyMassIndex >= 30){
        cout << "The weight status is: Obese" << endl;
    }

    return 0;

}