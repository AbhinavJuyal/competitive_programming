#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &x : a) {
        cin>>x;
    }
    int count = 0;
    int maxcount = 0;
    int b = 0;
    for(int i = 0; i < a.size(); i++) {
        if(count > 0 && a[i] < b) {
            maxcount = max(count, maxcount);
            b = 0;
            count = 0;
        }
        if(a[i] >= b)
            count++;
        b = a[i];
    }
    maxcount = max(count,maxcount);
    cout<<maxcount;
    return 0;
}