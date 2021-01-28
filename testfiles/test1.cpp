#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int


int main() {
  ll t,n;
  int k;
  cin>>t;
  while(t--) {
    cin>>n;
    cin>>k;
    int c;
    ll count = 0;
    vector<int> a;
    string s;
    forn(i,n) {
      s.push_back('0');
    }
    forn(i,n) {
      cin>>c;
      a.push_back(c);
    }
    forn(i,n) {
      if(s[i] == '1')
        continue;
      if(a[i] >= k) {
        s[i] = '1';
        count++;
        continue;
      }
      forn(j,n) {
        if(s[j] == '1' || i == j || a[j] >= k)
          continue;
        if(a[i] + a[j] >= k) {
          count++;
          s[j] = '1';
          s[i] = '1';
          break;
        }
      }
    }
    cout<<count;
    cout<<"\n";
  }
  return 0;
}