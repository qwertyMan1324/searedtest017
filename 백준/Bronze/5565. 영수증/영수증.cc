#include <iostream>

int main() 
{
    int allprice = 0;
    std::cin >> allprice;

    int miss[9];
    int all = 0;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> miss[i];
        all += miss[i];
    }


    int unknownPrice = allprice - all;

    std::cout << unknownPrice << std::endl;

    return 0;
}
