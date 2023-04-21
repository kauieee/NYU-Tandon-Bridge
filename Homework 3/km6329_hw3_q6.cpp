#include <iostream>
using namespace std;

const double WEEKEND_RATE = 0.15;
const double WEEKDAY_PEAK_HOURS_RATE = 0.40;
const double WEEKDAY_NON_PEAK_HOURS_RATE = 0.25;

int main(){

    int hours, minutes;
    char colon;
    string day;
    int callDurationInMinutes;
    double totalCost;

    cout << "Please enter the call starting time in 24-hour notation (hh:mm): ";
    cin >> hours >> colon >> minutes;

    cout << "Please enter the day in which the call took place (Mo/Tu/We/Th/Fr/Sa/Su): ";
    cin >> day;

    cout << "Please enter the duration of the call in minutes: ";
    cin >> callDurationInMinutes;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if (day == "Sa" || day == "Su"){
        totalCost = WEEKEND_RATE * callDurationInMinutes;
    } else {
        if((hours >= 8 && hours <= 17) || (hours == 6 && minutes == 0)){
            totalCost = WEEKDAY_PEAK_HOURS_RATE * callDurationInMinutes;
        } else {
            totalCost = WEEKDAY_NON_PEAK_HOURS_RATE * callDurationInMinutes;
        }
    }

    cout << "The total cost of the call is $" << totalCost << endl;

    return 0;

}