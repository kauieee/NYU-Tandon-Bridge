#include <iostream>
using namespace std;

const double RATE_WEEKEND = 0.15;
const double RATE_WEEKDAY_PEAK_HOURS = 0.40;
const double RATE_WEEKDAY_NON_PEAK_HOURS = 0.25;

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
        totalCost = RATE_WEEKEND * callDurationInMinutes;
    } else {
        if((hours >= 8 && hours <= 17) || (hours == 6 && minutes == 0)){
            totalCost = RATE_WEEKDAY_PEAK_HOURS * callDurationInMinutes;
        } else {
            totalCost = RATE_WEEKDAY_NON_PEAK_HOURS * callDurationInMinutes;
        }
    }

    cout << "The total cost of the call is $" << totalCost << endl;

    return 0;

}