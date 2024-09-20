#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool result = isPalindrome(str, 0, str.length() - 1);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}