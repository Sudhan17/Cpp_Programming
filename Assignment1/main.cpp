#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    num %= 2;

    if(num == 0)
    {
            cout << endl << "The number you entered is even";
    }
    else
    {
            cout << endl << "the number you entered is odd";
    }
    return 0;
}
