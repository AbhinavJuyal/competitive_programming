#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

#define f(i,n) for(int i = 0; i < n; i++)
#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        int64_t n,m,x,x1;
        cin>>n;
        cin>>m;
        cin>>x;
        int64_t ipos, jpos;
        jpos = ((x - 1) / n) + 1;
        ipos = x - ((jpos-1) * n);
        x1 = ((ipos-1)*m) + (jpos);
        cout<<x1<<"\n";
    }
    return 0;
}