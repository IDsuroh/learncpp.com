/*
Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100.
The user is given 7 tries to guess the number.

If the user does not guess the correct number,
the program should tell them whether they guessed too high or too low.
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost,
and what the correct number is. At the end of the game, the user should be asked if
they want to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.

Use the Random.h header from 8.15 -- Global random numbers (Random.h).

Here’s what your output should look like:

Let's play a game. I'm thinking of a number between 1 and 100.
You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Correct! You win!
Would you like to play again (y/n)? y
Let's play a game. I'm thinking of a number between 1 and 100.
You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Your guess is too high.
Guess #5: 36
Your guess is too low.
Guess #6: 45
Your guess is too low.
Guess #7: 48
Your guess is too low.
Sorry, you lose. The correct number was 49.
Would you like to play again (y/n)? q
Would you like to play again (y/n)? n
Thank you for playing.


For extra credit: make the minimum and maximum values and the number of guesses a configurable parameter.
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Random.h"  // Use the Random.h header for random number generation

void playGame(int minValue, int maxValue, int numGuesses) {
    std::cout << "\nLet's play a game. I'm thinking of a number between " 
              << minValue << " and " << maxValue << ".\n";
    std::cout << "You have " << numGuesses << " tries to guess what it is.\n";
    
    int answer = Random::get(minValue, maxValue);
    int guess;
    
    for (int i = 1; i <= numGuesses; ++i) {
        std::cout << "Guess #" << i << ": ";
        std::cin >> guess;
        
        if (guess > answer) {
            std::cout << "Your guess is too high.\n";
        }
        else if (guess < answer) {
            std::cout << "Your guess is too low.\n";
        }
        else {
            std::cout << "Correct! You win!\n";
            return; // Exit the function early on win
        }
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