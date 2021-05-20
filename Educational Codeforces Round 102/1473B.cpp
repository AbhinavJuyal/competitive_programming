#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        string s2;
        string s3;
        cin >> s;
        cin >> s2;
        int cs = s.size();
        int cs2 = s2.size();
        int c = (cs / gcd(cs, cs2)) * cs2;
        s3 = s;
        for (int i = 1; i < ceil(c / cs); i++)
        {
            s.append(s3);
        }
        s3 = s2;
        for (int i = 1; i < ceil(c / cs2); i++)
        {
            s2.append(s3);
        }
        // cout<<s<<" "<<s2<<endl;
        // cout<<ceil(c/cs)<<" "<<ceil(c/cs2)<<endl;
        if (s == s2)
            cout << s << endl;
        else
            cout << "-1" << endl;
    }
}