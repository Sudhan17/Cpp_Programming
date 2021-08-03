#include <iostream>

using namespace std;

int main()
{
    int value = 0;
    cout << "enter a number:";
    cin >> value;

    for(int i=1; i<=10 ; i++)
    {
        cout << endl << value << " * " << i << " = " << value * i;
    }

    return 0;
}
