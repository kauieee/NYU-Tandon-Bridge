#include <iostream>
using namespace std;

const int HOURS_IN_A_DAY = 24;
const int MINUTES_IN_AN_HOUR = 60;

int main(){

    int daysWorkedJohn, hoursWorkedJohn, minutesWorkedJohn, daysWorkedBill, hoursWorkedBill, minutesWorkedBill, totalDays, totalHours, totalMinutes, totalTimeWorkedInMinutes;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysWorkedJohn;

    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursWorkedJohn;

    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesWorkedJohn;

    cout << endl << "Please enter the number of days Bill has worked: ";
    cin >> daysWorkedBill;

    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursWorkedBill;

    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesWorkedBill;

    totalTimeWorkedInMinutes = ((daysWorkedJohn + daysWorkedBill) * HOURS_IN_A_DAY * MINUTES_IN_AN_HOUR) + ((hoursWorkedJohn + hoursWorkedBill) * MINUTES_IN_AN_HOUR) + (minutesWorkedJohn + minutesWorkedBill);
    
    cout << endl;

    totalDays = totalTimeWorkedInMinutes / (HOURS_IN_A_DAY * MINUTES_IN_AN_HOUR);
    totalTimeWorkedInMinutes -= (totalDays * HOURS_IN_A_DAY * MINUTES_IN_AN_HOUR);

    totalHours = totalTimeWorkedInMinutes / MINUTES_IN_AN_HOUR;
    totalTimeWorkedInMinutes -= (totalHours * MINUTES_IN_AN_HOUR);

    totalMinutes = totalTimeWorkedInMinutes;

    cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours and " << totalMinutes << " minutes." << endl;

    return 0;

}