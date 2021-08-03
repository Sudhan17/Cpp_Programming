#include <iostream>

using namespace std;
class person
{
private:
    int age;
    string name;
public:
    person(int age, string name)
    {
        this -> age = age;
        this -> name = name;
    }
    void print()
    {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    person a{22 , "Shak"};

    a.print();

    return 0;
}
