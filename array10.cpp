#include <iostream>
#include <vector>

using namespace std;

int countOccurrences(const vector<int>& arr, int target) {
    int count = 0;
    for (int num : arr) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 5};  
    int target;

    cout << "Enter the number to count occurrences: ";
    cin >> target;

    int occurrences = countOccurrences(arr, target);
    cout << "The required number " << target << " occurs " << occurrences << " times in the array." << endl;

    return 0;
}
