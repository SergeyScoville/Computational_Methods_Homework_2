#include "tools.h"

// Vector3D class member function definitions
Vector3D::Vector3D() : x(0), y(0), z(0) {}

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3D Vector3D::usingSpherical(double r, double theta, double phi) {
    return Vector3D(
        r * sin(theta) * cos(phi),
        r * sin(theta) * sin(phi),
        r * cos(theta)
    );
}

Vector3D Vector3D::operator-() const {
    return Vector3D(-x, -y, -z);
}

Vector3D& Vector3D::operator+=(const Vector3D &additional) {
    x += additional.x;
    y += additional.y;
    z += additional.z;
    return *this;
}

double Vector3D::dot(const Vector3D &additional) const {
    return x * additional.x + y * additional.y + z * additional.z;
}

Vector3D Vector3D::cross(const Vector3D &additional) const {
    return Vector3D(
        y * additional.z - z * additional.y,
        z * additional.x - x * additional.z,
        x * additional.y - y * additional.x
    );
}

double Vector3D::magnitude() const {
    return sqrt(x * x + y * y + z * z);
}

void Vector3D::print() const {
    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}

double Vector3D::getX() const { return x; }
double Vector3D::getY() const { return y; }
double Vector3D::getZ() const { return z; }

// Non-member function definitions
Vector3D operator+(const Vector3D &vector1, const Vector3D &vector2) {
    return Vector3D(vector1.getX() + vector2.getX(), vector1.getY() + vector2.getY(), vector1.getZ() + vector2.getZ());
}

Vector3D operator*(const Vector3D &vector, double scalar) {
    return Vector3D(vector.getX() * scalar, vector.getY() * scalar, vector.getZ() * scalar);
}

Vector3D operator*(double scalar, const Vector3D &vector) {
    return Vector3D(scalar * vector.getX(), scalar * vector.getY(), scalar * vector.getZ());
}

// Utility function definitions
std::string trimWhitespace(const std::string &input) {
    size_t start = input.find_first_not_of(" \t\n\r");
    size_t end = input.find_last_not_of(" \t\n\r");
    if (start == std::string::npos || end == std::string::npos) {
        return "";  // String is either all spaces or empty
    }
    return input.substr(start, end - start + 1);
}

bool isValidInteger(const std::string &input) {
    std::string trimmedInput = trimWhitespace(input);

    // Check if the input is empty after trimming
    if (trimmedInput.empty()) {
        return false;
    }

    // Reject if there are spaces in the middle
    if (trimmedInput.find(' ') != std::string::npos) {
        return false;
    }

    // Reject negative numbers
    if (trimmedInput[0] == '-') {
        return false;
    }

    // Check if all characters in the string are digits
    for (char ch : trimmedInput) {
        if (!std::isdigit(ch)) {
            return false;
        }
    }

    return true;
}

