#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;           // create input stream
    char ch;                // variable for storing GET pointer character

    fin.open("my.txt");     // load file into RAM
    fin >> ch;              // storing 1st GET pointer vale into CH variable

    while (!fin.eof())      // iteration till End of File
    {
        cout << ch;         // print the value at 1st Index(1st Character)
        fin >> ch;          // move GET pointer forward
    }

    fin.close();            // close the file from RAM

    return 0;
}
