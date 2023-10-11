#include <iostream>

int main() {
    int a = 5, b = 10;
    int temp;

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

  
    temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
