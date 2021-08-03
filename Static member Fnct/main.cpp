#include <iostream>

using namespace std;

class alpha
{
private:
    int a,b;
public:
    alpha()
    {
        a= 5;
        b= 5;
    }

    static int stat;

    static int getStat()
    {

        stat ++;
        return stat;
    }
};

int alpha::stat = 0;

int main()
{
    cout << "alpha stat Begin: " << alpha::getStat() << endl;

    alpha a1;
    alpha a2;

    cout << "alpha stat End: " << alpha::getStat() << endl;
    cout << "From a1: " << a1.getStat() << endl;
    cout << "From a2: " << a2.getStat() << endl;
    return 0;
}
