#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    for (int i = 0; i < T; i++) 
    {
        int A, B;

        cin >> A >> B;

        int sum = A + B;

        cout << "Case #" << i + 1 << ": " << sum << endl;
    }

    return 0;
}
