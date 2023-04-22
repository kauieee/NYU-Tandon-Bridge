#include <iostream>
using namespace std;

int main(){

    int n;
    int stars;
    int spaces;

    cout << "Please enter a positive integer: ";
    cin >> n;

    // Top half of the hour glass image
    stars = (2 * n) - 1;
    spaces = 0;
    
    for(int row = 0; row < n; row++){

        string rowString = "";

        for(int rowSpaces = 0; rowSpaces < spaces; rowSpaces++){
            rowString += " ";
        }

        for(int rowStars = 0; rowStars < stars; rowStars++){
            rowString += "*";
        }

        cout << rowString << endl;

        stars -= 2;
        spaces += 1;

    }

    // Bottom half of the hour glass image
    stars = 1;
    spaces = n - 1;

    for(int row = 0; row < n; row++){
        
        string rowString = "";

        for(int rowSpaces = 0; rowSpaces < spaces; rowSpaces++){
            rowString += " ";
        }

        for(int rowStars = 0; rowStars < stars; rowStars++){
            rowString += "*";
        }

        cout << rowString << endl;

        stars += 2;
        spaces -= 1;
    }

    return 0;

}