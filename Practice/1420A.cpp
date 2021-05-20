#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<int> a(n);
        for(int &x : a) {
            cin>>x;
        }
        ll i;
        for(i = 1; i < n; i++) {
            if(a[i-1] <= a[i]) {
                break;
            }
        }
        if(i == n) {
            cout<<"NO";
        } else {
            cout<<"YES";
        }
        cout<<"\n";
    }
}