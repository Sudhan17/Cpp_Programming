#include <iostream>

using namespace std;

class base
{
public:
    virtual ~base()
    {
        cout << "Base Class Destructor" << endl;
    }
};
class derived : public base
{
public:
    ~derived()
    {
        cout << "Derived Class Destructor" << endl;
    }
};
int main()
{
    base *ptr = new derived;
    delete ptr;
    return 0;
}
