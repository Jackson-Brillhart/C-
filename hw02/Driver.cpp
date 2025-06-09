// Jackson Brillhart
// CIS 2207 N01
// Date: 2025-05-25
// Problem Description: "complile with g++ -o GuessingGame Driver.cpp Game.cpp"
//then run with './GuessingGame'
//the program will ask for the number of intergers and the range of numbers and it will then have you imput the numbers and tells you what was right
// Driver.cpp has been changed into being ore object oriented and to make use of ADTs

#include <iostream>
#include <vector>
#include "Game.h"

using namespace std;

int main() {
    int numGuesses, range;

    cout << "Enter the number of guesses: ";
    cin >> numGuesses;

    cout << "Enter the max value for guesses: ";
    cin >> range;

    Game game(numGuesses, range);

    vector<int> guesses;
    int guess;

    cout << "Enter your " << numGuesses << " guesses:\n";
    for (int i = 0; i < numGuesses; ++i) {
        cout << "Guess #" << (i + 1) << ": ";
        cin >> guess;
        guesses.push_back(guess);
    }

    int correct = game.checkGuesses(guesses);

    cout << "\nYou got " << correct << " correct.\n";

    if (game.isCorrect(correct)) {
        cout << "You win!\n";
    } else {
        cout << "Try again.\n";
    }

    return 0;
}

