#include <iostream>

using namespace std;

class Date {
public:
    Date(int day, int month, int year) {
        setDay(day);
        setMonth(month);
        setYear(year);
    }

    void setDay(int day) {
        if (day >= 1 && day <= 31) {
            this->day = day;
        } else {
            cout << "Invalid day. Setting to 1." << endl;
            this->day = 1;
        }
    }

    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            this->month = month;
        } else {
            cout << "Invalid month. Setting to 1." << endl;
            this->month = 1;
        }
    }

    void setYear(int year) {
        this->year = year;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValid() const {

        return (day >= 1 && day <= 31 && month >= 1 && month <= 12);
    }

private:
    int day;
    int month;
    int year;
};

int main() {
    Date date(32, 13, 2023);

    cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;

    if (date.isValid()) {
        cout << "Date is valid." << endl;
    } else {
        cout << "Date is invalid." << endl;
    }

    return 0;
}