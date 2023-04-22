#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int n;
    int guessesLeft = 5;
    int guessCount = 1;
    int numberToGuess;
    int userInput;
    int lowerLimit = 1;
    int upperLimit = 100;

    srand(time(0));
    numberToGuess = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it.\n";

    while(guessesLeft > 0){
        cout << "Range: " << "[" << lowerLimit << ", " << upperLimit << "], "
            << "Number of guesses left: " << guessesLeft << endl;
        
        cout << "Your guess: ";
        cin >> userInput;

        if(guessesLeft == 1 && userInput != numberToGuess){
            cout << "Out of guesses! My number is " << numberToGuess << endl;
            break;
        }

        if(userInput < numberToGuess){
            lowerLimit = userInput + 1;
            guessesLeft--;
            guessCount++;
            cout << "Wrong! My number is bigger.\n\n";
        } else if(userInput > numberToGuess){
            upperLimit = userInput - 1;
            guessesLeft--;
            guessCount++;
            cout << "Wrong! My number is smaller.\n\n";
        } else {
            cout << "Congrats! You guessed my number in " << guessCount << " guesses.";
            break;
        }
    }

    return 0;

}