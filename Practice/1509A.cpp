#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> ae;
        vector<int> ao;
        vector<int> ans;
        for(int& x : a) {
            cin>>x;
        }
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) {
                ae.push_back(a[i]);
            } else {
                ao.push_back(a[i]);
            }
        }
        for(const int x : ae) {
            ans.push_back(x);
        }
        for(const int x : ao) {
            ans.push_back(x);
        }
        for(int& x : ans) {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}