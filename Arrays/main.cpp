#include <iostream>

using namespace std;

int main()
{
    int num[5] = {0};

    for(int i=0; i<5; i++)
    {
        cout << endl << "Enter number " << i+1 << " : ";
        cin >> num[i] ;
    }

    int sum = 0 ;
    for(int j=0; j<5 ; j++)
    {
        sum = sum + num[j];
    }

    cout << "The Sum is: " << sum << endl;

    return 0;
}
