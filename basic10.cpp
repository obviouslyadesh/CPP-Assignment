#include <iostream>
using namespace std;

int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;      
        }
        num = sum;  
    }
    return num;
}

int main() {
    int num;
    cout << "Enter any non-negative number: ";
    cin >> num;
    
    int result = addDigits(num);
    cout << "The required result after repeatedly adding digits: " << result << endl;
    
    return 0;
}
