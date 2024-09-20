#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, firstDigit, lastDigit, digits, swappedNumber;
    cout << "Input any number: ";
    cin >> num;

    lastDigit = num % 10;

    digits = (int)log10(num);

    firstDigit = num / pow(10, digits);

    swappedNumber = lastDigit * pow(10, digits) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;
    
    
    cout << "The required swapped number: " << swappedNumber << endl;
    return 0;
}
