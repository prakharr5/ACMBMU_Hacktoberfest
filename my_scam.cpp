#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print stars for the first and last row or for the diagonal
        if (i == 1 || i == n) {
            for (int j = 1; j <= 2 * i - 1; j++) {
                std::cout << "*";
            }
        } else {
            // Print stars for the hollow part
            std::cout << "*";
            for (int j = 1; j <= 2 * i - 3; j++) {
                std::cout << " ";
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
