#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll& x : a) {
        cin>>x;
    }
    sort(a.begin(),a.end());
    ll sum = 0;
    for(ll i = 0, j = n-1; i < n/2; i++, j--) {
        sum += (a[i] + a[j])*(a[i]+a[j]);
    }
    cout<<sum;
    return 0;
}