#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(string name, string className, int rollNumber, double marks) : name(name), className(className), rollNumber(rollNumber), marks(marks) {}

    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }

private:
    string name;
    string className;
    int rollNumber;
    double marks;
};

int main() {
    Student student("Adesh Bohara", "Class 11", 44, 86);

    student.displayInfo();

    return 0;
}