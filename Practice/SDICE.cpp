#include <bits/stdc++.h>
using namespace std;

#define f(i,n) for(int i = 0; i < n; i++)
#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll q,r,res = 0;
        q = n / 4;
        r = n % 4;
        res = 32 * q + 6 * r;
        if(r == 1) {
            res += 14;
        } else if (r == 2) {
            res += 28;
        } else if (r == 3) {
            res += 30;
        }
        if(q != 0) {
            res += 6*(4-r);
        }
        cout<<res;
        cout<<"\n";
    }
}