#include <iostream>
#include <string>
#include <map>

// Define a map to store predefined responses
std::map<std::string, std::string> responses = {
    {"hello", "Hello! How can I assist you today?"},
    {"how are you", "I'm just a computer program, so I don't have feelings, but I'm here to help."},
    {"bye", "Goodbye! Have a great day."},
    // Add more responses here
};

int main() {
    std::string user_input;

    std::cout << "Chatbot: Hello! What can I do for you today?" << std::endl;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, user_input);

        // Convert the user input to lowercase for case-insensitive matching
        std::transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

        if (user_input == "exit" || user_input == "quit") {
            std::cout << "Chatbot: Goodbye!" << std::endl;
            break;
        }

        bool response_found = false;
        for (const auto& pair : responses) {
            if (user_input.find(pair.first) != std::string::npos) {
                std::cout << "Chatbot: " << pair.second << std::endl;
                response_found = true;
                break;
            }
        }

        if (!response_found) {
            std::cout << "Chatbot: I'm not sure how to respond to that. Can you please rephrase?" << std::endl;
        }
    }

    return 0;
}
