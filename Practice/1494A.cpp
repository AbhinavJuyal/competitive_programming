#include <bits/stdc++.h>
#include <cstdint>
#include <string>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int
#define ld long double

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() {

    int t;
    string a;
    cin>>t;
    while(t--) {
        cin>>a;
        if(a[0] == a[a.size()-1]) {
            cout<<"NO\n";
        }
        int sum = 0;
        char ch = a[0];
        int val = 1;
        int A,B,C;
        for (int i = 0; i < a.size(); i++) {
            if(a[i] == 'A') 
                A++;
            else if(a[i] == 'B')
                B++;
            else
                C++; 
        }
        if(sum == 0) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    cout<<"\n";
    return 0;
}