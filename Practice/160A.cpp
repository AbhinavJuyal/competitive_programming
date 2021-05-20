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
    reverse(a.begin(),a.end());
    int sum = 0;
    for(int &x : a) {
        sum += x;
    }
    int req = sum / 2;
    sum = 0;
    int count = 0;
    for(int &x : a) {
        sum += x;
        if(sum > req) {
            count++;
            break;
        }
        count++;
    }
    cout<<count;
    return 0;
}