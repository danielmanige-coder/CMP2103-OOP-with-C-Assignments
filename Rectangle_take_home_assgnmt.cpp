#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    // Setter functions
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            std::cout << "Width must be positive.\n";
            width = 0;
        }
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            std::cout << "Length must be positive.\n";
            length = 0;
        }
    }

    // Getter functions
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Calculation functions
    double calculateArea() const {
        return width * length;
    }

    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect;

    // Set dimensions using setter functions
    rect.setWidth(5.5);
    rect.setLength(10.0);

    // Retrieve and display dimensions using getter functions
    std::cout << "Rectangle Dimensions:\n";
    std::cout << "Width: " << rect.getWidth() << "\n";
    std::cout << "Length: " << rect.getLength() << "\n\n";

    // Calculate and display area and perimeter[cite: 1]
    std::cout << "Calculations:\n";
    std::cout << "Area: " << rect.calculateArea() << "\n";
    std::cout << "Perimeter: " << rect.calculatePerimeter() << "\n";

    return 0;
}