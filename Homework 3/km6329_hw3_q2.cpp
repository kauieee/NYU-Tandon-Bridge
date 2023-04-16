#include <iostream>
using namespace std;

int main(){

    string name, studentStatus;
    int graduationYear, currentYear, differenceBetweenYears;

    // Getting input from the user
    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your graduation year: ";
    cin >> graduationYear;

    cout << "Please enter current year: ";
    cin >> currentYear;

    differenceBetweenYears = graduationYear - currentYear;

    if (differenceBetweenYears > 4) {
        studentStatus = "not in college yet";
    } else if (differenceBetweenYears == 4) {
        studentStatus = "a Freshman";
    } else if (differenceBetweenYears == 3) {
        studentStatus = "a Sophomore";
    } else if (differenceBetweenYears == 2) {
        studentStatus = "a Junior";
    } else if (differenceBetweenYears == 1) {
        studentStatus = "a Senior";
    } else if (differenceBetweenYears == 0) {
        studentStatus = "Graduated";
    }

    cout << name << ", you are " << studentStatus << endl;

    return 0;

}