#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    // Open the CSV file for reading
    std::ifstream inputFile("data.csv");

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    // Create a vector to store the extracted data
    std::vector<std::vector<std::string>> dataset;

    std::string line;
    while (std::getline(inputFile, line)) {
        std::vector<std::string> row;
        std::istringstream lineStream(line);
        std::string cell;

        while (std::getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        dataset.push_back(row);
    }

    // Close the file
    inputFile.close();

    // Now, you have the dataset in the 'dataset' vector and can process it as needed
    for (const auto& row : dataset) {
        for (const std::string& cell : row) {
            std::cout << cell << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
