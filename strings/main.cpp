#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fn, ln, addr;

    cout << "Enter Address: ";
    getline (cin , addr);

    cout << "Enter Firstname: ";
    cin >> fn;

    cout << "Enter Lastname: ";
    cin >> ln;

    string full = fn + ln ;

    cout << endl << "Your details:" << endl << full << endl << addr;

    return 0;
}
