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
    int t,n,c,idx;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> a;
        vector<int> mark(n,0);
        forn(i,n) {
            cin>>c;
            a.push_back(c);
        }
        idx = 1;
        int com;
        forn(i,n) {
            if(mark[i] > 0)
                continue;
            mark[i] = idx;
            com = a[i];
            for(int j = i+1; j < n; j++) {
                if(mark[j] > 0)
                    continue;
                if(a[j] > com) {
                    mark[j] = idx;
                    com = a[j];
                }
            }
            idx++;
        }
        cout<<idx-1<<"\n";
    }
}
 