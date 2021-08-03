#include <iostream>

using namespace std;
class person
{
private:
    int weight;
public:
    person (int x = 0)
    {
        weight = x;
    }
    void operator--()
    {
        --weight;
    }
    void operator--(int)
    {
        weight--;
    }
    void print()
    {
        cout << endl << weight << endl ;
    }
};

int main()
{
    person Shak(80);

    --Shak;
    Shak.print();

    Shak--;
    Shak.print();

    return 0;
}
