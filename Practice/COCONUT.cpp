#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int xa, xb, Xa, Xb;
        std::cin >> xa >> xb >> Xa >> Xb;
        int ca = std::ceil((double)Xa / xa);
        int cb = std::ceil((double)Xb / xb);
        std::cout<<ca + cb<<"\n";
    }
    return 0;
}