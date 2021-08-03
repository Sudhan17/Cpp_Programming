#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;          // create stream

    fout.open("my.txt");    // load file in RAM

    fout << " Shak Mama \n Legend";    // writing data into file

    fout.close();           // closing the file

    return 0;
}
