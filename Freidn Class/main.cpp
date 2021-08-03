#include <iostream>

using namespace std;

class alpha
{
private:
    int a;
public:
    alpha (int arg = 0)
    {
        a = arg;
    }
    friend class beta;
};

class beta
{
private:
    int b;
public:
    beta(int arg = 0)
    {
        b = arg;
    }

    int sum()
    {
       alpha alpha_obj(3);
       int sum = alpha_obj.a + b;
       return sum;
    }
};

int main()
{
    beta beta_obj(7);

    cout << "sum is: " << beta_obj.sum();

    return 0;
}
