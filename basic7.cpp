#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Enter any integer: ";
    cin >> n;

    if (n < 0) {
        cout << "There is no defined factorial for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "The required factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
