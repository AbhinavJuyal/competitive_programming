#include<bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
    cin>>s;
    string ser0 = "0000000";
    string ser1 = "1111111";

    int it0 = s.find(ser0);
    int it1 = s.find(ser1);
	
	if (it0 != s.npos || it1 != s.npos) 
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
    cout<<"\n";
	return 0;
}