#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    int sum = 0;

    for (int b = 1; b <= a; b++) {
        sum += b;
    }

    cout << sum <<  endl;

    return 0;
}
