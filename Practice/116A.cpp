#include <bits/stdc++.h>

int main() {
    int n;
    int a,b;
    int total = 0;
    int mx = 0;
    std::cin>>n;
    for(int i = 1; i <= n; i++) {
        std::cin>>a>>b;
        total = total + b - a;
        mx = std::max(mx,total);
    }
    std::cout<<mx;
    return 0;
}