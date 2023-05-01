//File Name: km6329_hw5_q5.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print all the divisors of a number in ascending order.
//Last Changed: May 1, 2023

#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
//Takes an positive integer num (>= 2) and updates two output parameters outCountDivs and outSumDivs
//with the number of num's proper divisors and their sum respectively.

bool isPerfect(int num, int& outSumDivs);
//Takes a positive integer num (>= 2) and and determines if it is a perfect number or not.

int main(){

    int num, outCountDivs, outSumDivs;

    cout << "Please enter a positive integer >= 2: ";
    cin >> num;

    for(int currentNum = 2; currentNum <= num; currentNum++){
        outCountDivs = 0;
        outSumDivs = 0;
        analyzeDividors(currentNum, outCountDivs, outSumDivs);
        if(isPerfect(currentNum, outSumDivs) == true){
            cout << currentNum << endl;
        }
    }

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    for (int divisor = 1; divisor < sqrt(num); divisor++) {
        if (num % divisor == 0) {
            outCountDivs += 1;
            outSumDivs += divisor;
        }
    }

    for (int divisor = sqrt(num); divisor >= 1; divisor--) {
        if ((num % divisor == 0) && (num / divisor != num)) {
            outCountDivs += 1;
            outSumDivs += num / divisor;
        }
    }
}

bool isPerfect(int num, int& outSumDivs){
    if(num == outSumDivs){
        return true;
    } else {
        return false;
    }
}