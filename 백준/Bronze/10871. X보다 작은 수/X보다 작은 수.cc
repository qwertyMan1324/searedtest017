#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) 
{
	int a, b;

	cin >> a >> b;

	int arr[10000];

	for (int i = 0; i < a; i++) 
	{
		cin >> arr[i];
	}

	
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < b) 
		{
			cout << arr[i] << " ";
		}
	}
	return 0;
}