#include <bits/stdc++.h>
using namespace std;

#define f(i,n) for(int i = 0; i < n; i++)
#define ll long long int

int find(int n, int k) {
    int res = k / n;
    if(k % n == 0)
        return res;
    else
        return res+1;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,r;
        cin>>n>>k;
        if(n == k) {
            r = 1;
        } else if (n < k) {
            r = find(n,k);
        } else if (n > k) {
            if(n % k == 0) {
                r = 1;
            } else {
                int k1 = n + k;
                k1 = (k1) - (k1 % k);
                r = find(n,k1);
            }
        }
        cout<<r<<"\n";
    }
    return 0;
}