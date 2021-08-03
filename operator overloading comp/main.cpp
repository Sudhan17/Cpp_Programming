#include <iostream>

using namespace std;

class person
{
private:
    int weight;
public:
    person(int w=0)
    {
        weight = w;
    }
    friend bool operator>(person x, person y);
    friend bool operator<(person x, person y);
};

bool operator>(person x, person y)
{
    return x.weight > y.weight;
}

bool operator<(person x, person y)
{
    return x.weight < y.weight;
}
int main()
{
    int w1, w2;

    cout << " Enter weight for person 1:" << endl;
    cin >> w1;

    cout << " Enter weight for person 2:" << endl;
    cin >> w2;

    person one(w1);
    person two(w2);

    if (one > two)
    {
        cout << "Person 1 is heavy" << endl;
    }
    else if (one < two)
    {
        cout << "Person two is heavy" << endl;
    }
    else
    {
        cout << "Both have same weight" << endl;
    }

    return 0;
}
