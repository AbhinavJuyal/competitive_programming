#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int binarySearch(vector<int> &arr, int p, int r, int x) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == x)
      return mid ;
      if (arr[mid] > x)
      return binarySearch(arr, p, mid-1, x);
      if (arr[mid] < x)
      return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
    
void fun(int x, vector<int> &F) {
    int i;
    sort(F.begin(),F.end());
    int index = binarySearch(F,0,F.size()-1,x);
    if(index == -1) {
        F.push_back(x);
    }
}


int main() {
    int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        string s;
        cin>>s;
        while(m--) {
            int x = 0;
            int count = 0;
            int l,r;
            cin>>l>>r;
            vector<int> F;
            F.push_back(0);
            for(int i = 0; i < s.size(); i++) {
                if(i < (l-1) || i > (r-1)) {
                    if(s[i] == '+') 
                        x++;
                    else
                        x--;
                    fun(x,F);
                }
            }
            cout<<F.size()<<endl;
        }
    }
}
