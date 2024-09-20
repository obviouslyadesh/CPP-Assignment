#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findFirstRepeating(const vector<int>& arr) {
    unordered_map<int, int> elementCount;  

    for (int i = 0; i < arr.size(); i++) {
        elementCount[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (elementCount[arr[i]] > 1) {
            return arr[i];
        }
    }

    return -1; 
}

int main() {
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};  

    int firstRepeating = findFirstRepeating(arr);

    if (firstRepeating != -1) {
        cout << "The first repeating element is: " << firstRepeating << endl;
    } else {
        cout << "Oops, No repeating element found." << endl;
    }

    return 0;
}
