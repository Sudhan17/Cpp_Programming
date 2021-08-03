#include <iostream>

using namespace std;

class house
{
private:
    int ln = 0,br = 0;
public :
    void setdata(int x , int y)
    {
        ln = x ;
        br = y ;
    }
    void area()
    {
        cout << "Area of the house is: " << ln*br << endl ;

    }
};
int main()
{
    house shak, vazz;

    shak.setdata(200,300);
    cout << "Shak's home: " << endl;
    shak.area();

    vazz.setdata(1000,500);
    cout << "Vazz's home: " << endl;
    vazz.area();

    return 0;
}
