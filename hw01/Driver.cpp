// Jackson Brillhart
// CIS 2207 N01
// Date: 2025-05-25
// Problem Description: "complile with g++ -o GuessingGame Driver.cpp Game.cpp"
//then run with './GuessingGame'
//the program will ask for the number of intergers and the range of numbers and it will then have you imput the numbers and tells you what was right

#include <iostream>
#include <vector>
#include "Game.h"

int main() {
    int n, m;
    char playAgain = 'Y';

    while (playAgain == 'Y' || playAgain == 'y') {
        std::cout << "Enter the Number of Integers (n): ";
        std::cin >> n;

        std::cout << "Enter the Number of Each Integers from 1 to (m): ";
        std::cin >> m;

        Game game(n, m);
        bool guessedCorrectly = false;

        while (!guessedCorrectly) {
            std::cout << "Enter your guesses for the " << n
                         << " integers in the range from 1 to " << m << " that have been selected: ";

                std::vector<int> guesses(n);
            for (int i = 0; i < n; ++i) {
                std::cin >> guesses[i];
            }

            int correctCount = game.checkGuesses(guesses);

            if (game.isCorrect(correctCount)) {
                 std::cout << "You are correct! Play again? (Y/N): ";
                std::cin >> playAgain;
                guessedCorrectly = true;
            } else {
                std::cout << correctCount << " of your guesses are correct. Guess again." << std::endl;
              }
        }
    }

    std::cout << "Good-bye!" << std::endl;
    return 0;
}
