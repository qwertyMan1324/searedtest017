#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) 
{
	int N;

	cin >> N;

	for (int b = 1; b <= N; b++) 
	{


		for (int a = 0; a < N - b; a++) 
		{
			cout << ' ';
		}


		for (int a = 0; a < b; a++) 
		{
			cout << '*';
		}


		cout << '\n';
	}
	return 0;
}