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
        if (n / 2020 >= n % 2020)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}