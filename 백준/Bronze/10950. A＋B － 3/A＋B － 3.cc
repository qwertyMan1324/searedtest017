#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;

	cin >> t;

	for (int c = 0; c < t; c++)
	{
		int a, b;
		
		cin >> a >> b;

		int r = a + b;
		cout << r << endl;
	}

	return 0;
}