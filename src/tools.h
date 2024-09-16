#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
#include <limits>

// Vector3D class declaration
class Vector3D {
private:
    double x, y, z;

public:
    // Null vector constructor
    Vector3D();

    // (x,y,z) constructor
    Vector3D(double x, double y, double z);

    // Three vector construction from r, theta, phi inputs - Static member function
    static Vector3D usingSpherical(double r, double theta, double phi);

    // Unary negation - Member function
    Vector3D operator-() const;

    // Plus-equals operator - Member function
    Vector3D& operator+=(const Vector3D &additional);

    // Dot product operator (vector dot vector) - Member function
    double dot(const Vector3D &additional) const;

    // Cross product operator (vector x vector) - Member function
    Vector3D cross(const Vector3D &additional) const;

    // Vector magnitude operator sqrt(x**2 + y**2 + z**2) - Member function
    double magnitude() const;

    // Print the vector out in vector form, e.g., (1,2,3) - Member function
    void print() const;

    // Getter methods
    double getX() const;
    double getY() const;
    double getZ() const;
};

// Vector addition (vector + vector) - Non-member function
Vector3D operator+(const Vector3D &vector1, const Vector3D &vector2);

// Scalar multiplication (vector * scalar) - Non-member function
Vector3D operator*(const Vector3D &vector, double scalar);

// Scalar multiplication (scalar * vector) - Non-member function
Vector3D operator*(double scalar, const Vector3D &vector);

// Function to trim leading and trailing whitespace
std::string trimWhitespace(const std::string &input);

// Function to check if the input is a valid non-negative integer
bool isValidInteger(const std::string &input);

#endif // TOOLS_H


