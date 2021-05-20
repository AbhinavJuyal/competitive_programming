#include <bits/stdc++.h>
using namespace std;

bool tri(int a, int b, int c) {
    return ((a+b>c)&&(a+c>b)&&(b+c>a));
}

bool seg(int a, int b, int c) {
    return ((a+b==c)||(a+c==b) || (b+c==a));
}

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    bool normal = false;
    bool deg = false;
    
    normal = normal || tri(a,b,c);
    normal = normal || tri(b,c,d);
    normal = normal || tri(c,d,a);
    normal = normal || tri(d,a,b);

    deg = deg || seg(a,b,c);
    deg = deg || seg(b,c,d);
    deg = deg || seg(c,d,a);
    deg = deg || seg(d,a,b);
    
    if(normal) {
        cout<<"TRIANGLE";
    } else if (deg) {
        cout<<"SEGMENT";    
    } else {
        cout<<"IMPOSSIBLE";
    }
    return 0;
}