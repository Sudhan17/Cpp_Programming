#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	char A[10];

	fin.open("my.txt");

	for (int i = 0; i < 10; i++)
	{
		A[i] = 0;
	}

	fin.seekg(2, ios_base::cur);


	fin.read(A, 2);

	for (int i = 0; A[i]!=0; i++)
	{
		cout << A[i];
	}

	fin.close();
	return 0;
}
