/*
This is a project that creates a class, in the format of a quaternion, that performs
many different vector operations on three-vectors. It also allows a user to create a 
N length array of three vectors, convert a vector from spherical to Cartesian and 
print out vectors. Finally, it tests it with a specific set of vectors and operations.
*/

#include <iostream>
#include "tools.h"

int main() {
    int N;
    std::string input;

    // Input loop until the user enters a valid integer
    while (true) {
        std::cout << "Enter the number of vectors (must be a positive integer): ";
        std::getline(std::cin, input);

        if (isValidInteger(input)) {
            N = std::stoi(trimWhitespace(input));
            break;
        } else {
            std::cout << "Invalid input. Please enter a valid positive integer without spaces in the middle.\n";
        }

        std::cin.clear();
    }

    std::cout << "You entered the number: " << N << "\n";

    std::vector<Vector3D> vectors(N);

    Vector3D a(1.0, 2.0, 3.0);
    Vector3D b(-3.0, 2.0, -1.0);
    Vector3D c(1.0, 1.0, 1.0);


    Vector3D result = a + b;
    Vector3D result2 = a + 2 * b;
    double dot = a.dot(b);
    Vector3D cross = a.cross(b);
    double crossdot = cross.dot(c);
    Vector3D negB = -b;
    Vector3D plusEqualsB = a += b;


    std::cout << "Sum of a and b: ";
    result.print();
    std::cout << "Magnitude of a + b: " << result.magnitude() << std::endl;
    std::cout << "Sum of a + 2 * b: ";
    result2.print();
    std::cout << "Dot product of a and b: " << dot << std::endl;
    std::cout << "Cross product of a and b: ";
    cross.print();
    std::cout << "Result of a cross b dot c: " << crossdot << std::endl;
    std::cout << "Result of a = -b: ";
    negB.print();
    std::cout << "Result of a += b: ";
    plusEqualsB.print();
    std::cout << std::endl;

    return 0;
}
