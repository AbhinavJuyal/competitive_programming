#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        vector<int> a(n);
        for(int& x : a) {
            cin>>x;
        }
        map<int,int> d;
        for(int i = 0; i < n; i++) {
            d[a[i] - i]++;
        }
        long long int count = 0;
        for(pair<int, int> e : d) {       
            long long int c = e.second;
            count += c*(c-1) / 2;
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}