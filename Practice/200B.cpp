#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    int p[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        std::cin>>p[i];
        sum += p[i];
    }
    std::cout<<std::fixed<<std::setprecision(12)<<(float)sum / n;
}