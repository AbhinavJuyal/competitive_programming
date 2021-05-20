#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        int no = 0;
        char x = s[0];
        s1.push_back(x);
        for(const char i : s) {
            if(x != i) {
                s1.push_back(i);
            }
            x = i;
        }
        for(int i = 0; i < s1.size()-1; i++) {
            if(s1.find(s1[i],i+1) != string::npos) {
                no = 1;
                break;
            }
        }
        if(no)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<"\n";
    }
    return 0;
}