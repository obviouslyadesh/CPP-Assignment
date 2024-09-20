#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void sumOfPrimes(int start, int end, int& sum) {
    if (start > end) {
        return;
    }

    if (isPrime(start)) {
        sum += start;
    }

    sumOfPrimes(start + 1, end, sum);
}

int main() {
    int start, end, sum = 0;

    cout << "Enter the starting and ending numbers: ";
    cin >> start >> end;

    sumOfPrimes(start, end, sum);

    cout << "The required sum of prime numbers: " << sum << endl;

    return 0;
}