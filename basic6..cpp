#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter any first integer: ";
    cin >> num1;
    cout << "Enter any second integer: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "The sum of two integers is: " << sum << endl;

    int digitCount = 0;
    if (sum == 0) {
        digitCount = 1;
    } else {
        digitCount = (int)log10(abs(sum)) + 1;
    }

    cout << "The required number of digits in the sum is: " << digitCount << endl;

    return 0;
}
