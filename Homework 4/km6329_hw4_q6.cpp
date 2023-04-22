#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for(int num = 1; num <= n; num++){

        int currentNum = num;
        int oddDigits = 0;
        int evenDigits = 0;
        
        while(currentNum > 0){

            int currentDigit = currentNum % 10;

            if(currentDigit % 2 == 0){
                evenDigits++;
            } else {
                oddDigits++;
            }

            currentNum /= 10;

        }

        if(evenDigits > oddDigits){
            cout << num << endl;
        }

    }

    return 0;

}