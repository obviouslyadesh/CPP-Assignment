#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter your Input: ";
    cin >> input; 

    int start = 0;
    int end = input.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (input[start] != input[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "True, it is palindrome." << endl;
    } else {
        cout << "False, it is not palindronme." << endl;
    }

    return 0;
}
