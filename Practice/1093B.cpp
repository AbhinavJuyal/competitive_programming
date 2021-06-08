#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        string s1 = s;
        reverse(s.begin(),s.end());
        if(s1 == s)
            cout<<"-1";
        else
            cout<<s;
        cout<<"\n";
    }
    return 0;
}
