//File Name: km6329_hw5_q2.cpp
//Author: Kaushik Manivannan
//Email Address: km6329@nyu.edu
//Homework Number: 5
//Description: Program to print a pine tree consisting of triangles of increasing sizes.
//Last Changed: May 1, 2023

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
//Prints an n-line triangle, filled with symbol characters, shifted m spaces from the left margin.

void printPineTree(int n, char symbol);
//Prints a sequence of n triangles of increasing sizes filled with symbol character.

int main(){

    int triangleCount;
    char symbol;

    cout << "Please enter the number of triangles in the tree: ";
    cin >> triangleCount;
    cout << "Please enter a character to fill the tree: ";
    cin >> symbol;

    printPineTree(triangleCount, symbol);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){

    int spaces = (n + m) - 1;
    int characters = 1;

    for(int row = 1; row <= n; row++){
        
        for(int spaceCount = spaces; spaceCount > 0; spaceCount--){
            cout << " ";
        }

        for(int charCount = characters; charCount > 0; charCount--){
            cout << symbol;
        }

        cout << endl;

        spaces -= 1;
        characters += 2;
    }
}

void printPineTree(int n, char symbol){

    int spaces = n - 1;

    for(int triangle = 1; triangle <= n; triangle++){
        
        int rows = triangle + 1;

        printShiftedTriangle(rows, spaces, symbol);

        spaces -= 1;
    }


}
