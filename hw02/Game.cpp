// Jackson Brillhart
// CIS 2207 N01
// Date: 2025-05-25
// Problem Description: "complile with g++ -o GuessingGame Driver.cpp Game.cpp"
//then run with ""./GuessingGame"
//the program will ask for the number of intergers and the range of numbers and it will then have you imput the numbers and tells you what was right
// Game.cpp has been changed to be more object oriented 
#include "Game.h"
#include <cstdlib>
#include <ctime>

Game::Game(int numElements, int maxValue) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    for (int i = 0; i < numElements; ++i) {
        selectedNumbers.push_back(std::rand() % maxValue + 1);
    }
}

int Game::checkGuesses(const std::vector<int>& guesses) const {
    int correctCount = 0;
    for (int i = 0; i < static_cast<int>(guesses.size()) && i < static_cast<int>(selectedNumbers.size()); ++i) {
        if (guesses[i] == selectedNumbers[i]) {
            ++correctCount;
        }
    }
    return correctCount;
}

bool Game::isCorrect(int correctCount) const {
    return correctCount == static_cast<int>(selectedNumbers.size());
}

