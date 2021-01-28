#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c;
        ll count = 0;
        // vector<int> v(n);
        forn(i, n)
        {
            cin >> c;
            if (c % 2 == 0)
                count++;
        }
        if (count == n)
            cout << "-1";
        else
            cout << count;
        cout << "\n";
    }
}