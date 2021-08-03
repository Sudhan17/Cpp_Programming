#include <iostream>
#include <string>
using namespace std;

struct person
{
    string name;
    int age;
    float weight;
    float height;
    double salary;
};

int main()
{
    person pVar;


    pVar.name = "Shak";
    pVar.age = 22;
    pVar.height = 6.0f;
    pVar.weight = 80.2f;
    pVar.salary = 800000;

    cout << endl<< "salary: " << pVar.salary;
    return 0;
}
