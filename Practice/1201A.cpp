#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n,m;
    cin>>n>>m;
    string s[n];
    for (string& i : s) {
        cin>>i;
    }
    int a[m];
    for(int& i : a) {
        cin>>i;
    }
    int maxcount = 0;
    for(int i = 0; i < m; i++) {
        int count[5] = {0};
        for(int j = 0; j < n; j++) {
            count[s[j][i] - 'A']++;
        }
        sort(count,count+5);
        maxcount += count[4] * a[i];
    }
    cout<<maxcount;
    return 0;
}