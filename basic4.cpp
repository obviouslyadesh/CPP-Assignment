#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumDigitsInRange(int start, int end) {
    int totalSum = 0;
    for (int i = start; i <= end; i++) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {
    int start, end;
    cout << "Enter the initial number: ";
    cin >> start;
    cout << "Enter the final number: ";
    cin >> end;
    int result = sumDigitsInRange(start, end);
    cout << "The required sum of all digits between " << start << " and " << end << " is: " << result << endl;
    return 0;
}
