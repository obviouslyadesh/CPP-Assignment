#include <iostream>

using namespace std;

class Triangle {
public:
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    bool isEquilateral() const {
        return side1 == side2 && side2 == side3;
    }

    bool isIsosceles() const {
        return (side1 == side2 || side1 == side3 || side2 == side3) && !isEquilateral();
    }

    bool isScalene() const {
        return side1 != side2 && side1 != side3 && side2 != side3;
    }

private:
    double side1, side2, side3;
};

int main() {
    Triangle triangle(3, 3, 3);

    if (triangle.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if (triangle.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if (triangle.isScalene()) {
        cout << "The triangle is scalene." << endl;
    } else {
        cout << "Invalid triangle." << endl;
    }

    return 0;
}