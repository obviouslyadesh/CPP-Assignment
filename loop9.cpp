#include <iostream>

using namespace std;

int main() {
    int number, reversedNumber = 0;
    cout << "Enter any number: ";
    cin >> number;

    while (number != 0) {
        int digit = number % 10; 
        reversedNumber = reversedNumber * 10 + digit; 
        number /= 10; 
    }

    cout << "The required number in reverse order is: " << reversedNumber << endl;

    return 0;
}
