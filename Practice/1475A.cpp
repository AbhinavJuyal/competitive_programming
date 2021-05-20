#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
 
#define forn(i,n) for(int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int
 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
 
int main() {
    int t;
    int64_t n;
    cin>>t;
    while(t--) {
        cin>>n;
        int64_t x;
        x = n;
        while(x%2 == 0) {
            x /= 2;
        }
        if(x == 1)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<"\n";
    }
    return 0;
}