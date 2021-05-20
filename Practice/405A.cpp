#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &x : a) {
        cin>>x;
    }
    sort(a.begin(),a.end());
    for(const int x : a) {
        cout<<x<<" ";
    }
    return 0;
}