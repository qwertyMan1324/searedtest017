#include <iostream>

using namespace std;

int main()
{
    int a;
    string b;
    cin >> a;
    
    for( int i=0; i<a; i++ )
    {
        cin >> b;
        cout << b.front() <<b.back() << endl;
    }
    

    return 0;
}