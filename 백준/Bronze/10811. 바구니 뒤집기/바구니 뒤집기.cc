#include <iostream>

using namespace std;

int main() 
{

	int a, b, c, d;

	int f[100];

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
		f[i] = i;

	while (b--) 
	{
		cin >> c >> d;

		for (int i = 0; i <= (d - c) / 2; i++) 
		{
			swap(f[c + i], f[d - i]);
		}
	}

	for (int i = 1; i <= a; i++) 
	{
		cout << f[i] << ' ';
	}

	return 0;
}