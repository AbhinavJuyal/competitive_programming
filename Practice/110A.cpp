#include <bits/stdc++.h>
int main() {
    long long int c4 = 0;
    long long int c7 = 0;
    long long int z = 0;
    long long int n;
    std::cin>>n;
    while(n != 0) {
        int rem = n % 10;
        if(rem == 4)
            c4++;
        if(rem == 7)
            c7++;
        z++;
        n = n / 10;
    }
    if(4 == c4 + c7 || 7 == c4 + c7)
        std::cout<<"YES";
    else
        std::cout<<"NO";
    return 0;
}