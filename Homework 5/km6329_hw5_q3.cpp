//File Name: km6329_hw5_q3.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print a yearly calendar.
//Last Changed: May 1, 2023

#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
//Prints a monthly calendar. The formal parameter named numOfDays is the number of days in the month. 
//The formal parameter named startingDay is the day in which the month begins.

bool isLeapYear(int year);
//Checks if the given year is a leap year

void printYearCalender(int year, int startingDay);
//Prints a yearly calender. The formal parameter named year is the calendar year. 
//The formal parameter named startingDay is the day in which the year begins.

int main(){

    int year, startingDay;

    cout << "Please enter the calendar year: ";
    cin >> year;

    cout << "Please enter the day in which the year begins (Enter 1 for Monday, 2 for Tuesday, 3 for Wednesday, and so on): ";
    cin >> startingDay;

    printYearCalender(year, startingDay);

    return 0;
}

int printMonthCalender(int numOfDays, int startingDay){
    
    int currentDay = 1;
    int currentPosition = 1;

    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun\n";

    // Printing empty spaces before the starting day
    while(currentPosition < startingDay){
        cout << " \t";
        currentPosition += 1;
    }

    // Printing the dates of the month from the starting day
    while(currentDay <= numOfDays){

        if(currentPosition % 7 == 0){
            cout << currentDay << endl;
            if(currentDay == numOfDays){
                return currentPosition;
            } else {
            currentPosition = 1;
            }
        } else {
            cout << currentDay << "\t";
            currentPosition += 1;
        }

        currentDay += 1;
    }
    
    return (currentPosition - 1);

}

bool isLeapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)){
        return true;
    } else {
        return false;
    }
}

void printYearCalender(int year, int startingDay){
    int currentMonth = 1;
    int daysInTheMonth;
    int startingDayOfMonth = startingDay;
    string month;

    while(currentMonth <= 12){

        switch(currentMonth){
            case 1:
                month = "January";
                daysInTheMonth = 31;
                break;

            case 2:
                month = "February";
                if(isLeapYear(year)){
                    daysInTheMonth = 29;
                } else{
                    daysInTheMonth = 28;
                }
                break;

            case 3:
                month = "March";
                daysInTheMonth = 31;
                break;

            case 4:
                month = "April";
                daysInTheMonth = 30;
                break;

            case 5:
                month = "May";
                daysInTheMonth = 31;
                break;
            
            case 6:
                month = "June";
                daysInTheMonth = 30;
                break;
            
            case 7:
                month = "July";
                daysInTheMonth = 31;
                break;
            
            case 8:
                month = "August";
                daysInTheMonth = 31;
                break;

            case 9:
                month = "September";
                daysInTheMonth = 30;
                break;
            
            case 10:
                month = "October";
                daysInTheMonth = 31;
                break;
            
            case 11:
                month = "November";
                daysInTheMonth = 30;
                break;
            
            case 12:
                month = "December";
                daysInTheMonth = 31;
                break;
        }

        
        cout << month << " " << year << endl;
        startingDayOfMonth = printMonthCalender(daysInTheMonth, startingDayOfMonth);
        if(startingDayOfMonth == 7){
            startingDayOfMonth /= 7;
        } else {
            startingDayOfMonth += 1;
        }

        cout << endl << endl;
        currentMonth += 1;
    }
}


