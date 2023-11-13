#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int max = -1000000;
    int min = 1000000;

    int b[a + 1];

    for (int i = 0; i < a; i++)
    {
        cin >> b[i];

        if (b[i] > max)
        {
            max = b[i];
        }

        if (b[i] < min)
        {
            min = b[i];
        }
    }
    cout << min << " " << max;

    return 0;
}