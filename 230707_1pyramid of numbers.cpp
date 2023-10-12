#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }

        // Print numbers in ascending order
        for (int k = 1; k <= i; k++) {
            std::cout << k;
        }

        // Print numbers in descending order
        for (int l = i - 1; l >= 1; l--) {
            std::cout << l;
        }

        std::cout << std::endl;
    }

    return 0;
}
