#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

vector<string> findStringsWithNumbers(const vector<string>& strings) {
    vector<string> result;
    regex numberRegex("[0-9]");

    for (const string& str : strings) {
        if (regex_search(str, numberRegex)) {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    vector<string> strings = {"apple", "banana123", "cherry45", "date", "elderberry"};

    vector<string> stringsWithNumbers = findStringsWithNumbers(strings);

    if (stringsWithNumbers.empty()) {
        cout << "No strings contain numbers." << endl;
    } else {
        cout << "Strings containing numbers:\n";
        for (const string& str : stringsWithNumbers) {
            cout << str << endl;
        }
    }

    return 0;
}