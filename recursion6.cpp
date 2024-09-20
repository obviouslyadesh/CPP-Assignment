#include <iostream>

using namespace std;

void sumOfEvenOdd(int start, int end, int& evenSum, int& oddSum) {
    if (start > end) {
        return;
    }

    if (start % 2 == 0) {
        evenSum += start;
    } else {
        oddSum += start;
    }

    sumOfEvenOdd(start + 1, end, evenSum, oddSum);
}

int main() {
    int start, end, evenSum = 0, oddSum = 0;

    cout << "Enter the starting and ending numbers: ";
    cin >> start >> end;

    sumOfEvenOdd(start, end, evenSum, oddSum);

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}