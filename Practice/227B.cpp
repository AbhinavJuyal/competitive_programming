#include <iostream>
#include <map>
#define ll long long int

int main() {
    ll n;
    std::cin>>n;
    ll a[n] = {0}, b[n] = {0};
    for(ll i = 0; i < n; i++) {
        std::cin>>a[i];
        b[a[i]-1] = i+1;
    }
    ll start = 0, end = 0;
    ll q;
    std::cin>>q;
    while(q--) {
        ll el;
        std::cin>>el;
        ll idx = b[el-1];
        start += idx;
        end += n - idx + 1;
    }
    std::cout<<start<<" "<<end;
    return 0;
}