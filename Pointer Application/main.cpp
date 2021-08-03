#include <iostream>

using namespace std;

class car
{
private:
    int weight;
public:
    void SetWeight(int w)
    {
        weight = w;
    }
    int GetWeight()
    {
        return weight;
    }
};
class BMW
{
private:
    int topspeed;
    car *ptr;

public:
    BMW(int wght = 0, int tspeed = 0)
    {
        ptr = new car;

        ptr -> SetWeight(wght);

        topspeed = tspeed;
    }
    int getWeight()
    {
        return ptr -> GetWeight();
    }
    int getTSpeed()
    {
        return topspeed;
    }
    ~BMW()
    {
        delete ptr;
    }
};
int main()
{
    BMW b(3000,350);

    cout << "Weight of Car = " << b.getWeight() << endl;

    cout << "Top Speed of Car = " << b.getTSpeed() <<endl;
    return 0;
}
