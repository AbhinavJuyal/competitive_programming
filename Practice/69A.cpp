#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = n;
    int sI = 0, sJ = 0, sK = 0;
    while(i--) {
        int x,y,z;
        cin>>x>>y>>z;
        sI += x;
        sJ += y;
        sK += z;
    }
    if(sI != 0 || sJ != 0 || sK != 0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}