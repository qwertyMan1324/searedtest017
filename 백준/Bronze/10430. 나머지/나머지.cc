#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	int result1 = (a + b) % c;
	int result2 = ((a % c) + (b % c)) % c;
	int result3 = (a * b) % c;
	int result4 = ((a % c) * (b % c)) % c;

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;

	return 0;

}