#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(char &i : s) {
        if(i == 'H' || i == 'Q' || i == '9') {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
    return 0;
}