#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t,k;
    cin>>t;
    while(t--) {
        cin>>k;
        int div = gcd(k,100);
        cout<<100 / div;
        cout<<"\n";
    }
    return 0;
}