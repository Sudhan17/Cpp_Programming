#include <iostream>

using namespace std;

class base
{
public:
    virtual void show()
    {
        cout<< "Base Class" << endl;
    }
};
class drv1 : public base
{
public:
    void show()
    {
        cout<< "Derived Class 1" << endl;
    }
};
class drv2 : public base
{
public:
    void show()
    {
        cout<< "Derived Class 2" << endl;
    }
};

int main()
{
    base *ptr;

    ptr = new drv1();

    ptr -> show();

    ptr = new drv2();

    ptr -> show();

    return 0;
}
