#include <iostream>
#include <cstdlib>
#include <ctime>

class NumberGuessingGame {
private:
    int secretNumber;
    int lowerBound;
    int upperBound;
    int numberOfAttempts;

public:
    NumberGuessingGame(int lower, int upper, int attempts) 
        : lowerBound(lower), upperBound(upper), numberOfAttempts(attempts) {
        // Seed the random number generator
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        // Generate a random number within the specified range
        secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    }

    void play() {
        int guess;
        bool hasGuessedCorrectly = false;

        std::cout << "Welcome to the Number Guessing Game!\n";
        std::cout << "Try to guess the number between " << lowerBound << " and " << upperBound << ".\n";

        for (int attempt = 1; attempt <= numberOfAttempts; ++attempt) {
            std::cout << "Attempt #" << attempt << ": Enter your guess: ";
            std::cin >> guess;

            if (guess == secretNumber) {
                hasGuessedCorrectly = true;
                break;
            } else {
                std::cout << "Incorrect! ";
                if (guess < secretNumber) {
                    std::cout << "Try a higher number.\n";
                } else {
                    std::cout << "Try a lower number.\n";
                }
            }
        }

        if (hasGuessedCorrectly) {
            std::cout << "Congratulations! You guessed the correct number.\n";
        } else {
            std::cout << "Sorry, you've run out of attempts. The correct number was " << secretNumber << ".\n";
        }
    }
};

int main() {
    // Create a NumberGuessingGame instance with a range of 1 to 100 and 5 attempts
    NumberGuessingGame game(
