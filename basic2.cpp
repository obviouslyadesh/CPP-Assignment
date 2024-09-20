#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "Input 1st number: ";
    cin >> num1;
    cout << "Input 2nd number: ";
    cin >> num2;

    num1 = num1 + num2;  
    num2 = num1 - num2;  
    num1 = num1 - num2;  

    cout << "The required swapped 1st number is: " << num1 << endl;
    cout << "The required swapped 2nd number is: " << num2 << endl;

    return 0;
}
