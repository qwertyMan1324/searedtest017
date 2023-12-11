#include <iostream>
#include <string>
using namespace std;


	int main(int argc, const char* argv[])
	{
		int num[9];
		for (int i = 0; i < 9; i++)
		{
			cin >> num[i];
		}
		int maxvalue = -1;
		int maxvalueindex;
		for (int i = 0; i < 9; i++)
		{
			if (num[i] > maxvalue)
			{
				maxvalue = num[i];
				maxvalueindex = i;
			}
		}
		cout << maxvalue << "\n";
		cout << maxvalueindex + 1;

	
	return 0;
	}