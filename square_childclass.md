# Square Class Using Inheritance in C++

## 1. Introduction

This program demonstrates inheritance in Object-Oriented Programming (OOP) using C++. It defines a parent class called `GeometricObject` and a child class called `Square`.

The `GeometricObject` class contains the common attributes `color` and `filled`. The `Square` class inherits these attributes and introduces its own attribute, `side`, which represents the length of one side of the square.

The program calculates the area and perimeter of a square and displays its properties.

## 2. OOP Concepts Used

### a) Inheritance

Inheritance allows one class to acquire the accessible properties and functions of another class.

In this program, `Square` inherits publicly from `GeometricObject`:

```cpp
class Square : public GeometricObject
```

This allows a `Square` object to access inherited public functions such as `getColor()`, `setColor()`, `isFilled()`, and `setFilled()`.

### b) Encapsulation

Encapsulation involves combining data and functions in a class while controlling access to the data.

The attributes `color`, `filled`, and `side` are declared private. They are accessed or modified through public member functions such as `getSide()` and `setSide()`.

### c) Classes and Objects

A class is a blueprint for creating objects. `GeometricObject` and `Square` are the classes used in this program.

The statement:

```cpp
Square square(5.0, "blue", true);
```

creates an object named `square` with a side length of 5.0, a blue color, and a filled status of true.

### d) Constructors

Constructors initialize objects when they are created.

The `GeometricObject` constructor initializes the color and filled attributes. The `Square` constructor initializes the side length and passes the color and filled values to the parent constructor.

### e) Member Functions

Member functions define the operations that objects can perform.

The `getArea()` function calculates the area, while `getPerimeter()` calculates the perimeter. The inherited getter functions retrieve the color and filled status.

## 3. Algorithm

1. Start the program.
2. Define the parent class `GeometricObject` with the attributes `color` and `filled`.
3. Define constructors and public getter and setter functions in the parent class.
4. Define the child class `Square`, inheriting publicly from `GeometricObject`.
5. Declare the private attribute `side` in the `Square` class.
6. Create a constructor that initializes the side length and inherited attributes.
7. Define `getArea()` to calculate the area using \(A = s^2\).
8. Define `getPerimeter()` to calculate the perimeter using \(P = 4s\).
9. Create a square object in the `main()` function.
10. Display the inherited attributes, side length, area, and perimeter.
11. End the program.

## 4. Mathematical Formulas

Let \(s\) represent the length of one side of the square.

**Area:**

\[
A = s \times s = s^2
\]

**Perimeter:**

\[
P = 4 \times s
\]

For a square with side length 5 units:

\[
A = 5 \times 5 = 25
\]

\[
P = 4 \times 5 = 20
\]

## 5. Sample Output

```text
SQUARE DETAILS
Color: blue
Filled: true
Side: 5
Area: 25
Perimeter: 20

Complete square information:
color: blue and filled: true
Side: 5
Area: 25
Perimeter: 20
```

## 6. Possible Error Points

1. **Incorrect inheritance syntax:** Writing `class Square : GeometricObject` uses private inheritance by default. Use `class Square : public GeometricObject` to expose the parent's public interface through the child class.

2. **Incorrect constructor initialization:** The parent constructor must be called in the child constructor's initializer list to initialize the inherited attributes with the intended values.

3. **Incorrect formulas:** The area is `side * side`, while the perimeter is `4 * side`.

4. **Invalid side length:** A square cannot have a negative side length. The program should validate user input or reject negative values if input is added.

5. **Uninitialized attributes:** Ensure the constructor initializes `side` and the parent attributes.

6. **Incorrect access to private data:** The child class cannot directly access the parent's private attributes. It should use the parent's public member functions.

7. **Missing header files:** Include `<iostream>` and `<string>` for console input/output and string handling.

## 7. Conclusion

The program demonstrates how inheritance promotes code reuse in C++. The `Square` class inherits common geometric properties from `GeometricObject` while defining its own side length and calculation functions. This reduces duplication and makes the program easier to maintain and extend.
