#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int product = 1; 
    int originalNumber = number; 

    while (number > 0) {
        int digit = number % 10; 
        product *= digit; 
        number /= 10;
    }

    cout << "The required product of digits"  << " = " << product << endl;

    return 0;
}
