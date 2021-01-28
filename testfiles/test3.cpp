#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        string s;
        cin>>s;
        while(m--) {
            int x = 0;
			// int c1 = 0, c2 = 0;
            int l,r;
            cin>>l>>r;
			// string s1;
			vector<int> F;
			int min = 0, max = 0;
			for (int i = 0; i < s.size(); i++)
			{	
				if(i < l-1 || i > r-1) {
					if(s[i] == '+')
						x++;
					else
						x--;
					if(x < min)
						min = x;
					if(x > max)
						max = x;
				}
			}
			cout<<max-min+1<<endl;
        }
    }
}