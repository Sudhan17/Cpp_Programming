#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter String 1: ";
    cin >> str1;


    cout << "Enter String 2: ";
    cin >> str2;

    if(str1 == str2)
    {
        cout << "Both strings are equal";
    }
    else
    {
        cout << "Both strings are different";
    }
    return 0;
}

