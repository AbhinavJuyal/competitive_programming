#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int found = s.find("WUB");
    while(found != s.npos) {
        s.replace(found,3," ");
        found = s.find("WUB");
    }
    while(s[0] == ' ') {
        s.erase(s.begin());
    }
    reverse(s.begin(),s.end());
    while(s[0] == ' ') {
        s.erase(s.begin());
    }
    reverse(s.begin(),s.end());
    int l = -1;
    int idx_start = -1;
    for(int i = 0; i < s.size(); i++) {
        if(l == -1 && s[i] == ' ') {
            idx_start = i;
            l = 0;
        }
        if(l > 0 && s[i] != ' ') {
            s.replace(idx_start,l," ");
            i -= l-1;
            l = -1;
        }
        if(s[i] == ' ') {
            l++;
        }
    }
    cout<<s;
    return 0;
}