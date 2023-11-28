#include <iostream>

using namespace std;

int reverse(int n)
{
    int a = 0;
    a += (n%10)*100;
    a += ((n%100)/10)*10;
    a += n/100;

    return a;
}

int main(){
    int b, c;
    cin >> b >> c;

    b = reverse(b);
    c = reverse(c);

    if(b>c) cout << b;
    else cout <<c;

}