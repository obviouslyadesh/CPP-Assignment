#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

string findThirdLargestString(const vector<string>& arr) {
    set<string> uniqueStrings(arr.begin(), arr.end());  

    if (uniqueStrings.size() < 3) {
        return "Oops! Not enough unique strings";  
    }

    auto it = uniqueStrings.rbegin();  
    advance(it, 2);  

    return *it;  
}

int main() {
    vector<string> arr = {"apple", "banana", "pear", "kiwi", "grape", "banana"};  // Example array

    string thirdLargest = findThirdLargestString(arr);
    cout << "The required third largest string is: " << thirdLargest << endl;

    return 0;
}
