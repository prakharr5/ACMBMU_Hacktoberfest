#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}
