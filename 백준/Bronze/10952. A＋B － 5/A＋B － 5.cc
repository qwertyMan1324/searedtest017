#include <iostream>

int main() 
{
    int A, B;

    while (true) 
    {
        std::cin >> A >> B;

        if (A == 0 && B == 0) 
        {
            break;
        }

        int sum = A + B;

        std::cout << sum << std::endl;
    }

    return 0;
}
