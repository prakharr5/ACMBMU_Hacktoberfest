#include <iostream>

// Function to calculate the integral of a linear equation ax + b
double calculateIntegral(double a, double b, double x1, double x2) {
    // Integral of ax + b with respect to x is (a/2)x^2 + bx + C
    double integral = (a / 2.0) * (x2 * x2 - x1 * x1) + b * (x2 - x1);
    return integral;
}

int main() {
    double a, b, x1, x2;

    // Input coefficients and integration limits
    std::cout << "Enter the coefficient 'a': ";
    std::cin >> a;
    std::cout << "Enter the coefficient 'b': ";
    std::cin >> b;
    std::cout << "Enter the lower limit 'x1': ";
    std::cin >> x1;
    std::cout << "Enter the upper limit 'x2': ";
    std::cin >> x2;

    double result = calculateIntegral(a, b, x1, x2);

    // Display the result
    std::cout << "The integral of " << a << "x + " << b << " from " << x1 << " to " << x2 << " is: " << result << std::endl;

    return 0;
}
