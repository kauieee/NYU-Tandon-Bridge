#include <iostream>
using namespace std;

int main() {

    int num, remainder;
    string romanNumerals = "";

    cout << "Enter decimal number: " << endl;
    cin >> num;

    remainder = num;

    while(remainder > 0){
        if(remainder / 1000 > 0){
            int quotient = remainder / 1000;
            
            while(quotient > 0){
                romanNumerals += "M";
                quotient--;
            }

            remainder %= 1000;
        
        } else if(remainder / 500 > 0){
            int quotient = remainder / 500;
            
            while(quotient > 0){
                romanNumerals += "D";
                quotient--;
            }

            remainder %= 500;
        } else if(remainder / 100 > 0){
            int quotient = remainder / 100;
            
            while(quotient > 0){
                romanNumerals += "C";
                quotient--;
            }

            remainder %= 100;
        
        } else if(remainder / 50 > 0){
            int quotient = remainder / 50;
            
            while(quotient > 0){
                romanNumerals += "L";
                quotient--;
            }

            remainder %= 50;
        
        } else if(remainder / 10 > 0){
            int quotient = remainder / 10;
            
            while(quotient > 0){
                romanNumerals += "X";
                quotient--;
            }

            remainder %= 10;
        
        } else if(remainder / 5 > 0){
            int quotient = remainder / 5;
            
            while(quotient > 0){
                romanNumerals += "V";
                quotient--;
            }

            remainder %= 5;
        
        } else {
            int quotient = remainder / 1;
            
            while(quotient > 0){
                romanNumerals += "I";
                quotient--;
            }

            remainder %= 1;
        }
    }

    cout << num << " is " << romanNumerals << endl;

    return 0;
}