#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    for (int x = 0; x < T; x++) 
    {
        int A, B;

        cin >> A >> B;

        int c = A + B;

        cout << "Case #" << x + 1 << ": " << A << " " << "+" << " " << B << " " << "=" << " " << c << endl;
    }

    return 0;
}