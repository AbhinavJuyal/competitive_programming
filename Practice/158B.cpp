#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int n1,n2,n3,n4;
    n1 = n2 = n3 = n4 = 0;
    for(int& x : a) {
        cin>>x;
        if(x == 1)
            n1++;
        else if (x == 2)
            n2++;
        else if (x == 3)
            n3++;
        else if (x == 4)
            n4++;
    }
    int add = 0;
    if(n1 != 0 && n3 != 0) {
        int c = min(n1,n3);
        add += c;
        n1 -= c;
        n3 -= c;
    }
    if(n1 >= 2 && n2 != 0) {
        int c = min(n1/2,n2);
        add += c;
        n1 -= c*2;
        n2 -= c;
    }
    if(n1 != 0 && n2 != 0) {
        int c = min(n1,n2);
        add += c;
        n1 -= c;
        n2 -= c;
    }
    if(n2 >= 2) {
        add += n2 /2;
        if(n2 % 2 == 0)
            n2 = 0;
        else
            n2 = 1;
    }
    if(n1 >= 4) {
        add += n1/4;
        if(n1 % 4 == 0)
            n1 = 0;
        else
            n1 = 1;
    }
    if(n1 >= 2) {
        add += n1 / 2;
        if(n1 % 2 == 0)
            n1 = 0;
        else
            n1 = 1;
    }
    int res = add + n1 + n2 + n3 + n4;
    cout<<res;
}