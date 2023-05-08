//File Name: km6329_hw5_q6.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print the approximate values of e.
//Last Changed: May 1, 2023

#include <iostream>
using namespace std;

double eApprox(int n);
//Takes a positive integer n and returns an approximation of e, calculated by the sum of the infinite series for the first (n+1) addends.

double factorial(int num);
//Calculates the factorial of a positive integer.

int main(){

    cout.precision(30);
    
    for(int n = 1; n <= 15; n++){

        cout << "n = " << n << '\t' << eApprox(n) << endl;
 
    }

    return 0;

}

double eApprox(int n){
    
    double eApproxVal = 1.0;
    double addend;

    for(int num = 1; num <= n; num++){
        addend = 1.0 / factorial(num);
        eApproxVal += addend;
    }

    return eApproxVal;
}

double factorial(int num){
    
    double fact = 1;

    while(num >= 1){
        fact *= num;
        num -= 1;
    }

    return fact;
}