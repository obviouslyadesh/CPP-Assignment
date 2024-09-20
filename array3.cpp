#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

void findKLargestElements(int arr[], int n, int k) {
    if (k > n) {
        cout << "k cannot be larger than the array size." << endl;
        return;
    }

    sort(arr, arr + n, greater<int>());

    cout << "The required " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 5, 787, 1, 23, 45, 9, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findKLargestElements(arr, n, k);

    return 0;
}
