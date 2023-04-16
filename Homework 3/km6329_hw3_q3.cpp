#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, c, determinant;
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
    }

    if (a == 0 && b == 0 && c != 0){
        cout << "This equation has no solution" << endl;
    }
    
    determinant = (b*b - (4*a*c));

    if (determinant > 0){
        root1 = (-b + sqrt(determinant))/ 2 * a;
        root2 = (-b - sqrt(determinant))/ 2 * a;
        cout << "This equation has two real solutions " << "x=" << root1 << " and x=" << root2 << endl; 
    } else if (determinant == 0){
        root1 = (-b / 2 * a);
        cout << "This equation has a single real solution " << "x=" << root1 << endl;
    } else if (determinant < 0){
        cout << "This equation has no real solution" << endl;
    }

    return 0;

}