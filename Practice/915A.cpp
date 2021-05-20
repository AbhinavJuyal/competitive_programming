#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int m = 1;
    for(int& i : a) {
        cin>>i;
        if(k % i == 0 && i <= k) {
            m = max(i,m);
        }
    }
    cout<<k / m;
}