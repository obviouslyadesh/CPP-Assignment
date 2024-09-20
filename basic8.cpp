#include <iostream>
using namespace std;

int main() {
    int year, month, days;

    cout << "Enter the Year: ";
    cin >> year;

    cout << "Enter the Month (1-12): ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else {
        cout << "That's invalid month!" << endl;
        return 1;
    }

    cout << "The required number of days of the year " << year << " and month " << month << " is: " << days << endl;

    return 0;
}
