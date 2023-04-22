#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Please enter a positive integer:" << endl;
    cin >> n;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            cout << row * col << "\t";
        }
        cout << endl;
    }

    return 0;

}