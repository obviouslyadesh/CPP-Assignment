#include <iostream>
using namespace std;

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    if (second == -1) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The required second largest element is: " << second << endl;
    }
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, n);

    return 0;
}
