#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int

int main()
{
    int t;
    cin >> t;
    ll n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int a;
        a = 0;
        forn(i, s.size())
        {
            if (s[i] == '1')
                a++;
            else
                a--;
            if (a == 4)
                a = 0;
            if (a == -1)
                a = 3;
        }

        if (a == 0)
            cout << "E";
        else if (a == 1)
            cout << "N";
        else if (a == 2)
            cout << "W";
        else if (a == 3)
            cout << "S";
        cout << "\n";
    }

    return 0;
}