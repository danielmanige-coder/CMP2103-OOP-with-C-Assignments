```cpp
// Inheritance: Square inherits from GeometricObject

#include <iostream>
#include <string>
using namespace std;

// Parent class
class GeometricObject
{
private:
    string color;
    bool filled;

public:
    GeometricObject(string color = "green",
                    bool filled = true)
        : color(color), filled(filled)
    {
    }

    string getColor() const
    {
        return color;
    }

    void setColor(const string &color)
    {
        this->color = color;
    }

    bool isFilled() const
    {
        return filled;
    }

    void setFilled(bool filled)
    {
        this->filled = filled;
    }

    string toString() const
    {
        return "color: " + color +
               " and filled: " +
               (filled ? "true" : "false");
    }
};

// Child class inheriting from GeometricObject
class Square : public GeometricObject
{
private:
    double side;

public:
    // Constructor
    Square(double side,
           string color = "green",
           bool filled = true)
        : GeometricObject(color, filled), side(side)
    {
    }

    // Get side length
    double getSide() const
    {
        return side;
    }

    // Set side length
    void setSide(double side)
    {
        this->side = side;
    }

    // Calculate perimeter
    double getPerimeter() const
    {
        return 4 * side;
    }

    // Calculate area
    double getArea() const
    {
        return side * side;
    }

    // Display square information
    void printSquare() const
    {
        cout << toString() << '\n';
        cout << "Side: " << side << '\n';
        cout << "Area: " << getArea() << '\n';
        cout << "Perimeter: " << getPerimeter() << '\n';
    }
};

int main()
{
    // Create a Square object
    Square square(5.0, "blue", true);

    cout << "SQUARE DETAILS" << '\n';

    // Inherited attributes
    cout << "Color: " << square.getColor() << '\n';
    cout << "Filled: "
         << (square.isFilled() ? "true" : "false")
         << '\n';

    // Square attributes and calculations
    cout << "Side: " << square.getSide() << '\n';
    cout << "Area: " << square.getArea() << '\n';
    cout << "Perimeter: " << square.getPerimeter() << '\n';

    cout << "\nComplete square information:\n";
    square.printSquare();

    return 0;
}
```