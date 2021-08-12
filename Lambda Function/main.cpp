#include <iostream>
#include <string>
using namespace std;

//lambda by value
int main()
{
	string msg = "Shak Mama says - ";
	string msg2 = "Trap Says";
	//[a, &b] : capture a by value and b by reference
	// [] arg -> return_type { definition };
	auto sum = [msg](string a, string b) -> string { return msg + a +" " + b ; };

	//[=] : will save all the variables needed
	//      in the body of the lambda by value.

	cout << sum("Vazz","Legend") << endl;

	return 0;
}
