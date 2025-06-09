// Jackson Brillhart
// CIS 2207 N01
// Date: 2025-05-25
// Problem Description: complile with "g++ -o GuessingGame Driver.cpp Game.cpp'
//then run with ""./GuessingGame"
//the program will ask for the number of intergers and the range of numbers and it will then have you imput the numbers and tells you what was right
// Game.h modified be more object oriented 
#ifndef GAME_H
#define GAME_H

#include <vector>

class Game {
public:
    Game(int numElements, int maxValue);
    int checkGuesses(const std::vector<int>& guesses) const;
    bool isCorrect(int correctCount) const;

private:
    std::vector<int> selectedNumbers;
};

#endif


