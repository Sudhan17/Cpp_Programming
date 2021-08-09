#include <iostream>

using namespace std;

int main()
{
    int num1 = 0 , num2 = 0 , total = 0 ;

    cout << "Enter Two Numbers: " << endl;
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0)
        {
            throw num2;
        }
        else
        {
            total = num1/num2;
            cout << "Output is: " << total << endl ;
        }
    }
    // catch(int x)
    // {
    //     cout << "Exception is: Divide by: " << x << endl;
    // }
    catch(...)
    {
        cout << "Error Occured !" << endl;
    }

    return 0;
}
