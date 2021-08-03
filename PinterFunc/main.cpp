 #include <iostream>

using namespace std;

void square(int *ptr)
{
    int temp = *ptr;

    temp = temp*temp;

    *ptr = temp;
}
int main()
{
    int num = 10;

    cout << "Before: " << num << endl;

    square(&num);

    cout << "After: " << num << endl;
    return 0;
}
