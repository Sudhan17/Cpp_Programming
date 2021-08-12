#include <iostream>
#include <thread>
using namespace std;

int main()
{
	// [] arg -> return_type { definition };
	thread t1([] {std::cout << "Shak "; });
	thread t2([] {std::cout << "Mama"; });

	if (t1.joinable())
	t1.join();

	if (t2.joinable())
	t2.join();

	return 0;
}
