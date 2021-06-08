#include <bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;
    while(t--) {
        int n;
        int exit = 0;
        std::cin>>n;
        std::vector<int> a(n);
        for(int& x : a) {
            std::cin>>x;
            if(x < 0) {
                exit = 1;
            }
        }
        if(exit) {
            std::cout<<"NO\n";
            continue;
        } else {
            std::cout<<"YES\n"<<"101\n";
            for(int i = 0; i <= 100; i++)
                std::cout<<i<<" ";
            std::cout<<"\n";
        }
    }
    return 0;
}