#include <iostream>
using namespace std;

int main() {

    int num, remainder;
    string binaryNum;

    cout << "Enter decimal number:" << endl;
    cin >> num;

    remainder = num;

    while(remainder > 0){
        
        if (remainder % 2 == 0){
            binaryNum = "0" + binaryNum;
        } else {
            binaryNum = "1" + binaryNum;
        }

        remainder /= 2;
    
    }

    cout << "The binary representation of " << num << " is " << binaryNum << endl;

    return 0;
}