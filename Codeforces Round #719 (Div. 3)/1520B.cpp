#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll z = 0;
        ll x = n;
        while(x != 0) {
            x = x / 10;
            z++;
        }
        x = n / pow(10,z-1);
        ll lim = 0;
        for(int i = z-1; i >= 0; i--) {
            lim += pow(10,i)*x;
        }
        int add;
        if(n >= lim) {
            add = 1;
        } else {
            add = 0;
        }
        ll res = (9 * (z-1)) + (x - 1) + add;
        cout<<res<<"\n";
    }
}