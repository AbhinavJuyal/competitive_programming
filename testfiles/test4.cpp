#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)

int main() {
    string s;
    forn(i,10) {
        forn(j,10) {
            if(i == 5) {
                cout<<"break\n";
                break;
            }
        }
        cout<<i<<"\n";
    } 
    cout<<s;
    return 0;
}


3
5 8
9 3 4 4 5
5 8
5 2 3 5 1
3 6
7 6 8
