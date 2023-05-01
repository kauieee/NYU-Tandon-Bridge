//File Name: km6329_hw5_q1.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print the nth element in the fibonacci sequence.
//Last Changed: May 1, 2023

#include <iostream>
using namespace std;

int fib(int n);
//Takes a number n and returns the nth fibonacci number.

int main(){

    int num;

    cout << "Please enter a positive integer: ";
    cin >> num;

    cout << fib(num);

    return 0;
}

int fib(int n){

    int firstNum = 1;
    int secondNum = 1;
    int currentFibVal;

    if(n == 1 || n == 2){
        return 1;
    }

    for(int i = 3; i <= n; i++){

        currentFibVal = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = currentFibVal;

    }

    return currentFibVal;

}