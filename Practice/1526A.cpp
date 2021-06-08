#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+(2*n));
        for (int i = 1; i < n; i += 2)
        {   
            swap(a[i], a[(2 * n) - 1 - i]);
        }
        for (int i = 0; i < 2 * n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}