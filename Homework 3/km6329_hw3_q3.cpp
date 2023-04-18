#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c, determinant;
    double root1, root2;

    // Getting input from the user
    cout << "Please enter value of a: ";
    cin >> a;
    
    cout << "Please enter value of b: ";
    cin >> b;

    cout << "Please enter value of c: ";
    cin >> c;

    if (a == 0 && b == 0 && c == 0){
        cout << "This equation has an infinite number of solutions" << endl;
    } else if (a == 0 && b == 0 && c != 0){
        cout << "This equation has no solution" << endl;
    } else {
        determinant = (b*b - (4*a*c));
        // Setting the precision of the solutions to 1
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        // Finding the number of solutions based on the value of the determinant
        if (determinant > 0){ // If determinant is positive, there are 2 real solutions
            root1 = (-b + sqrt(determinant))/ 2 * a;
            root2 = (-b - sqrt(determinant))/ 2 * a;
            cout << "This equation has two real solutions " << "x=" << root1 << " and x=" << root2 << endl; 
        } else if (determinant == 0){ // If determinant is zero, there is 1 real solution
            root1 = (-b / 2 * a);
            cout << "This equation has a single real solution " << "x=" << root1 << endl;
        } else if (determinant < 0){ // If determinant is negative, there is no real solution
            cout << "This equation has no real solution" << endl;
        }
    }

    return 0;

}