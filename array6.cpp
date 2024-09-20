#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void findTwoRepeating(int arr[], int n) {
    unordered_set<int> seen;  
    vector<int> repeating;   

    cout << "The required repeating elements are: ";
    
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            repeating.push_back(arr[i]);
            if (repeating.size() == 2) break;
        } else {
            seen.insert(arr[i]);
        }
    }

    if (repeating.size() == 2) {
        cout << repeating[0] << " and " << repeating[1] << endl;
    } else {
        cout << "Less than two repeating elements found." << endl;
    }
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoRepeating(arr, n);

    return 0;
}
