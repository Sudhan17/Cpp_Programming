#include <iostream>

using namespace std;

class mobile
{
private:
    string name;
    int RAM;
    string processor;
    int battery;

public:
    mobile(string name_a = "Generic" , int RAM_a = 2 , string processor_a = "mtk", int battery_a = 2000)
    {
        name = name_a;
        RAM = RAM_a;
        processor = processor_a;
        battery = battery_a;
    }

    mobile(mobile &mob)
    {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }

    void getMobileData();
};

void mobile::getMobileData()
{
    cout << endl << "name: " << name;
    cout << endl << "RAM: " << RAM;
    cout << endl << "processor: " << processor;
    cout << endl << "battery: " << battery;
    cout << endl;
}

int main()
{
    mobile China;

    mobile Lenovo("k8", 3, "Mediatek", 4000);

    mobile Copy(Lenovo);

    China.getMobileData();
    Lenovo.getMobileData();
    Copy.getMobileData();

    return 0;
}
