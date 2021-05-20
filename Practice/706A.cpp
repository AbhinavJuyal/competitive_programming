#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    double a,b,n;
    cin>>a>>b;
    cin>>n;
    double m = 200 * sqrt(2);
    while(n--) {
        double x,y,v;
        cin>>x>>y>>v;
        double t;
        double sq = sqrt(((a-x)*(a-x)) + ((b-y)*(b-y)));
        t = sq / v;
        m = min(t,m);
    }
    cout<<fixed<<setprecision(20)<<m<<"\n";
    return 0;
}