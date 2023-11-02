#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;

	int result;

	cin >> n;

	for (int a = 1; a <= 9; a++)
	{
		int result = n * a;
		cout << n <<" "<< "*" << " " << a << " " << "=" << " " << result << endl;
	}
}