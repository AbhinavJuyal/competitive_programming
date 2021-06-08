#include <bits/stdc++.h>

int main() {
    int k,l,m,n,d;
    int count = 0;
    std::cin>>k>>l>>m>>n>>d;
    for(int i = 1; i <= d; i++) {
        if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
            count++;
    }
    if(d - count < 0)
        std::cout<<0;
    else
        std::cout<<d-count;
    return 0;
}