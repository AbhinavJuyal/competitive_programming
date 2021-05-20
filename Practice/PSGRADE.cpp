#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        int amin, bmin, cmin, tmin, a,b,c;
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        if(a >= amin && b >= bmin && c >= cmin && (a+b+c) >= tmin) {
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout<<"\n";
    }
}