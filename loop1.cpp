#include <iostream>

using namespace std;

int main() {
    cout << "The required perfect numbers between 1 to 500 are:\n";

    for (int num = 1; num <= 500; num++) {
        int sum = 0;
        for (int divisor = 1; divisor < num; divisor++) {
            if (num % divisor == 0) {
                sum += divisor; 
            }
        }
        if (sum == num) {
            cout << num << endl; 
        }
    }

    return 0;
}
