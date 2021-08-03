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

        stat++;
    }

    static int stat;
};

int alpha::stat = 0;
int main()
{
    alpha a1;
    cout << "a1 stat: " << a1.stat << endl;

    alpha a2;

    cout << "a2 stat: " << a2.stat << endl;
    cout << "alpha stat: " << alpha::stat << endl;
    return 0;
}
