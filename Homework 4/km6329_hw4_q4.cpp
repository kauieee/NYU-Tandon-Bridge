#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;
    int length;
    int counter = 0;
    int product = 1;
    double nthRoot;
    double geometricMean;
    bool seenEndOfInput = false;

    // Section A
    cout << "section a" << endl;

    cout << "Please enter the length of the sequence: ";
    cin >> length;

    cout << "Please enter your sequence:" << endl;

    for(int i = 0; i < length; i++){

        cin >> num;
        product *= num;

    }

    nthRoot = (double)1 / (double)length;

    geometricMean = pow(product, nthRoot);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout << "The geometric mean is: " << geometricMean << endl << endl;

    // Section B
    cout << "section b" << endl;

    num = 0;
    product = 1;
    geometricMean = 0;
    nthRoot = 0;


    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:" << endl;

    while(!seenEndOfInput){

        cin >> num;
        
        if(num == -1){
            seenEndOfInput = true;
            break;
        }

        product *= num;
        counter++;

    }

    nthRoot = (double)1 / (double)counter;

    geometricMean = pow(product, nthRoot);

    cout << "The geometric mean is: " << geometricMean << endl << endl;

    return 0;
}