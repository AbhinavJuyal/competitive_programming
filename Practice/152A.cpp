#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    char a[n][m];
    char mi = '1';
    vector<int> arr;
    vector<int>::iterator it;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        mi = '1';
        for(int j = 0; j < n; j++) {
            if(a[j][i] >= mi) 
                mi = a[j][i];
        }

        for(int j = 0; j < n; j++) {
            if(a[j][i] == mi) {
                it = find(arr.begin(),arr.end(),j+1);
                if(it == arr.end()) 
                    arr.push_back(j+1);
            }
        }
        if(arr.size() == n) 
            break;
    }
    cout<<arr.size();
}