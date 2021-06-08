#include <bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;
    while(t--) {
        int n;
        std::cin>>n;
        std::vector<int> a(n);
        for(int& x : a)
            std::cin>>x;
        sort(a.begin(),a.end());
        int count = 1;
        for(int i = 1; i < n; i++) {
            if(a[0] == a[i]) {
                count++;
            }
        }
        int add = 0;
        if(count == 0) {
            int avg= (a[0] + a[1]) / 2;
            if(a[0] > avg)
                add++;
            if(a[1] > avg)
                add++;
        } 
        std::cout<<n - count + add;
        std::cout<<"\n";
    }
}