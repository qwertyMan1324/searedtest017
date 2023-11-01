#include <iostream>
#include <string>
using namespace std;

int main()
{
	int syears;

	cin >> syears;

	
	if (syears % 4 == 0 &&(syears % 100 != 0 || (syears % 400 == 0)))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

	return 0;

}