#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int a, b;

	cin >> a >> b;

	int result1 = a * (b % 10);

	int result2 = a * ((b % 100) / 10);

	int result3 = a * (b / 100);

	int result4 = a * b;

	
	cout << result1 << endl;

	cout << result2 << endl;

	cout << result3 << endl;

	cout << result4 << endl;
	

	return 0;

}