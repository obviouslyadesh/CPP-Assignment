#include <iostream>

using namespace std;

int main() {
    int letters;
    cout << "Enter the number less than 26: ";
    cin >> letters;

    for (int i = 0; i < letters; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
