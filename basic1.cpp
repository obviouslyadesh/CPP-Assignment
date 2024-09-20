#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string FirstName, LastName;

    cout << "Input First Name: ";
    cin >> FirstName;
    cout << "Input Last Name: ";
    cin >> LastName;

    cout << "The required name in reverse order is: " << LastName << " " << FirstName << endl;

    return 0;
}
