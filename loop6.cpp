#include <iostream>

using namespace std;

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    for (int i = 1; i <= terms; i++) {
        int cube = i * i * i; 
        cout << "Number is: " << i << " and the cube of " << i << " is: " << cube << endl;
    }

    return 0;
}
