#include <iostream>

using namespace std;

class parent        // abstract class
{
public:
    virtual void give() = 0;    //pure virtual fn

};
class boy : public parent
{
public:
    void give()
    {
        cout<< "Brown Bun" << endl;
    }
};
class girl : public parent
{
public:
    void give()
    {
        cout<< "Pink Bun" << endl;
    }
};

int main()
{
    parent *ptr;

    ptr = new boy();

    ptr -> give();

    ptr = new girl();

    ptr -> give();

    return 0;
}
