#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee(string name, int id, double salary) : name(name), employeeID(id), salary(salary) {}

    void calculateSalary(double performanceRating) {
        salary += salary * performanceRating / 100;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }

private:
    string name;
    int employeeID;
    double salary;
};

int main() {
    Employee employee("John Doe", 12345, 50000);

    cout << "Employee Name: " << employee.getName() << endl;
    cout << "Employee ID: " << employee.getEmployeeID() << endl;
    cout << "Initial Salary: " << employee.getSalary() << endl;

    employee.calculateSalary(15); 

    cout << "Updated Salary: " << employee.getSalary() << endl;

    employee.setSalary(60000);

    cout << "New Salary: " << employee.getSalary() << endl;

    return 0;
}