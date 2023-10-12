#include <iostream>
#include <cmath>

// Base class
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual double perimeter() const = 0;  // Pure virtual function
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Use polymorphism to call area and perimeter without knowing the specific derived type
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    std::cout << "Circle - Area: " << shape
