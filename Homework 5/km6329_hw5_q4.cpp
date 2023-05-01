//File Name: km6329_hw5_q4.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print all the divisors of a number in ascending order.
//Last Changed: May 1, 2023

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printDivisors(int num);

int main(){

    int num;

    cout << "Please enter a positive integer >= 2: ";
    cin >> num;

    printDivisors(num);

    return 0;
}

void printDivisors(int num){

    for (int divisor = 1; divisor < sqrt(num); divisor++) {
        if (num % divisor == 0) {
            cout << divisor << " ";
        }
    }

    for (int divisor = sqrt(num); divisor >= 1; divisor--) {
        if (num % divisor == 0) {
            cout << num / divisor << " ";
        }
    }

}


