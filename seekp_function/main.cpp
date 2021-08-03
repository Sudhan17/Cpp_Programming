#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	char A[5] = "Mama";

	fout.open("my.txt",ios::in);

	fout.seekp(4, ios_base::beg);

	fout.write(A,5);

	fout.close();
	return 0;
}
