#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int& x : a) {
        cin>>x;
    }
    int diff = 0;
    int count = 0;
    int pos = -1;
    for(int i = 0; i < n; i++) {
        a[i] += diff;
        diff = a[i] - 8;
        if(diff< 0) {
            count += a[i];
            diff = 0;
        } else {
            count += 8;
        }
        if(count >= k) {
            pos = i;
            break;
        }
    }
    if(pos == -1)
        cout<<pos;
    else
        cout<<pos+1;
}