#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter your Input: ";
    getline(cin, input);

    bool capitalizeNext = true;

    for (size_t i = 0; i < input.length(); i++) {
        if (capitalizeNext && isalpha(input[i])) {
            input[i] = toupper(input[i]);

            capitalizeNext = false;
        } else if (isspace(input[i])) {
            capitalizeNext = true;
        }
    }

    cout << "The required capitalized first letter of each word: " << input << endl;
    
    return 0;
}
