#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    int a[n];
    int mx = 0;
    int mn = 10000;
    int count = 0;
    for(int i = 0; i < n; i++) {
        std::cin>>a[i];
        if(i == 0) {
            mx = a[i];
            mn = a[i];
        }
        if(a[i] < mn || a[i] > mx) {
            count++;
        }
        mx = std::max(mx,a[i]);
        mn = std::min(mn,a[i]);
    }
    std::cout<<count;
    return 0;
}