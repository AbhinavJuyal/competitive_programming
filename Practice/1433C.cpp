#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int64_t n;
        cin>>n;
        vector<int> a(n);
        int m = 0;
        for(int& x : a) {
            cin>>x;
            m = max(m,x);
        }
        int pos = -2;
        for(int i = 0; i < n; i++) {
            if(a[i] == m) {
                if(i == 0) {
                    if(a[i+1] < a[i]) {
                        pos = i;
                    }
                } else if(i == n-1) {
                    if(a[i-1] < a[i]) {
                        pos = i;
                    }
                } else if(a[i+1] < a[i] || a[i-1] < a[i]) {
                    pos = i;
                }
            }
        }
        cout<<pos+1;
        cout<<"\n";
    }
    return 0;
}