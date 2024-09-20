#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    cout << "The required numbers between 100 and 200 which are divisible by 9:\n";

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " "; 
            sum += i; 
        }
    }

    cout << endl << "The sum is: " << sum << endl;

    return 0;
}
