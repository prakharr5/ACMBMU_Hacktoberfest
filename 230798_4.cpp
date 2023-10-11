    #include <iostream>

    int main() {
        int rows;

        std::cout << "Enter the number of rows (must be an odd number): ";
        std::cin >> rows;

        if (rows % 2 == 0) {
            std::cout << "Please enter an odd number of rows." << std::endl;
            return 1;
        }

        int space = rows / 2;


        for (int i = 1; i <= rows; i += 2) {
            for (int j = 1; j <= space; j++) {
                std::cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }

            std::cout << "\n";
            space--;
        }

        space = 1;

        for (int i = rows - 2; i >= 1; i -= 2) {
            for (int j = 1; j <= space; j++) {
                std::cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }

            std::cout << "\n";
            space++;
        }

        return 0;
    }
