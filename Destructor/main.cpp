#include <iostream>

using namespace std;
class test
{
private:
    int *age;
public:
    test()
    {
        age = new int();
        *age = 0;
        cout << endl << "NP-Constructor";
    }
    test (int x)
    {
        age = new int();
        *age = x;
        cout << endl << "P-Constructor";
    }
    ~test()
    {
        delete age;
        cout << endl << "Destructor";
    }
};
int main()
{
    test obj;
    test obj2(10);
    return 0;
}
