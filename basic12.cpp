#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int n;

    cout << "Enter any non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Sorry! No square root for negative numbers." << endl;
    } else {
        int result = (int)sqrt(n); 
        cout << "The required square root of " << n << " = " << result << endl;
    }

    return 0;
}
