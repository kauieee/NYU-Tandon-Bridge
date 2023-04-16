#include <iostream>
using namespace std;

int main(){

    int hours, minutes;
    char colon;
    string day;
    int callDurationInMinutes;
    double totalCost;

    cout << "Please enter the call starting time in 24-hour notation (hh:mm): ";
    cin >> hours >> colon >> minutes;

    cout << "Please enter the day of the week in which the call took place (Mo/Tu/We/Th/Fr/Sa/Su): ";
    cin >> day;

    cout << "Please enter the duration of the call in minutes: ";
    cin >> callDurationInMinutes;

    if (day == "Sa" || day == "Su"){
        totalCost = 0.15 * callDurationInMinutes;
    } else {
        if((hours >= 8 && hours <= 17) || (hours == 6 && minutes == 0)){
            totalCost = 0.40 * callDurationInMinutes;
        } else {
            totalCost = 0.25 * callDurationInMinutes;
        }
    }

    cout << "The total cost of the call is $" << totalCost << endl;

    return 0;

}