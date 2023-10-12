#include <iostream>

int main() {
    // Declare and initialize a number
    int number = 12345;

    // Extract the last two digits using the modulus operator
    int lastDigit = number % 10;        // Extracts the last digit
    int secondLastDigit = (number / 10) % 10;  // Extracts the second last digit

    // Calculate the product of the last two digits
    int product = lastDigit * secondLastDigit;

    // Display the result
    std::cout << "The product of the last two digits of " << number << " is: " << product << std::endl;

    return 0;
}
