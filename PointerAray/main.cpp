#include <iostream>

using namespace std;
const int MAX = 5;
void printArray(int *ptr)
{

    for (int i = 0 ; i < MAX ; i++)
    {
        cout << *ptr++ << endl;
    }
}
int main()
{
    int num[MAX] = {10,20,30,40,50};

    printArray(num);

    return 0;
}
