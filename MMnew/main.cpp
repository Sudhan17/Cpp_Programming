#include <iostream>

using namespace std;

class test
{
private:
    int data;
public:
    void setData(int set)
    {
        data = set;
    }
    int getData()
    {
        return data;
    }
};
int main()
{
    test *t2 = new test;

    t2->setData(10);

    cout << "Value is: " << t2->getData();

    return 0;
}
