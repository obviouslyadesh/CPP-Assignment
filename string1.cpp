#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter your Input: ";
    cin >> input;

    string reversed = ""; 

    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    cout << "The required reversed of "<< input << " is " << reversed << endl;

    return 0;
}
