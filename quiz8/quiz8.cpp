/*
In a quiz for lesson 8.x -- Chapter 8 summary and quiz, we implemented a game of Hi-Lo.

Update your previous solution to handle invalid guesses (e.g. ‘x’), out of bounds guesses
(e.g. 0 or 101), or valid guesses that have extraneous characters (e.g. 43x).
Also handle the user entering extra characters when the game asks them
whether they want to play again.

Hint: Write a separate function to handle the user inputting their guess
(along with the associated error handling).
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Random.h"  // Use the Random.h header for random number generation

int getValidGuess(int minValue, int maxValue) {
    while (true) {
        std::string input;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        
        int guess;
        if (!(iss >> guess)) {
            std::cout << "Invalid input. Please enter a number: ";
            continue;
        }
        
        char extra;
        if (iss >> extra) {
            std::cout << "Invalid input. Please enter only a number: ";
            continue;
        }
        
        if (guess < minValue || guess > maxValue) {
            std::cout << "Out of range. Please enter a number between " 
                      << minValue << " and " << maxValue << ": ";
            continue;
        }
        
        return guess;
    }
}

void playGame(int minValue, int maxValue, int numGuesses) {
    std::cout << "\nLet's play a game. I'm thinking of a number between " 
              << minValue << " and " << maxValue << ".\n";
    std::cout << "You have " << numGuesses << " tries to guess what it is.\n";
    
    int answer = Random::get(minValue, maxValue);
    int guess;
    
    for (int i = 1; i <= numGuesses; ++i) {
        std::cout << "Guess #" << i << ": ";
        std::cin >> guess;
        
        guess = getValidGuess(minValue, maxValue);
    }
    
    std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
}

bool playAgain() {
    while (true) {
        std::cout << "Would you like to play again (y/n)? ";
        
        std::string response;
        std::getline(std::cin >> std::ws, response);
        
        if (response == "y" || response == "Y") {
            return true;
        }
        else if (response == "n" || response == "N") {
            return false;
        }
    }
}

int main() {
    int minValue = 1;
    int maxValue = 100;
    int numGuesses = 7;
    std::string inputStr;

    std::cout << "Enter the minimum value (default " << minValue << "): ";
    std::getline(std::cin, inputStr);
    if (!inputStr.empty()) {
        std::istringstream iss(inputStr);
        int temp;
        if (iss >> temp) {
            minValue = temp;
        } else {
            std::cout << "Invalid input, using default value.\n";
        }
    }
    
    std::cout << "Enter the maximum value (default " << maxValue << "): ";
    std::getline(std::cin, inputStr);
    if (!inputStr.empty()) {
        std::istringstream iss(inputStr);
        int temp;
        if (iss >> temp) {
            maxValue = temp;
        } else {
            std::cout << "Invalid input, using default value.\n";
        }
    }

    std::cout << "Enter the number of guesses allowed (default " << numGuesses << "): ";
    std::getline(std::cin, inputStr);
    if (!inputStr.empty()) {
        std::istringstream iss(inputStr);
        int temp;
        if (iss >> temp) {
            numGuesses = temp;
        } else {
            std::cout << "Invalid input, using default value.\n";
        }
    }

    do {
        playGame(minValue, maxValue, numGuesses);
    } while (playAgain());
    
    std::cout << "Thank you for playing.\n";
    return 0;
}