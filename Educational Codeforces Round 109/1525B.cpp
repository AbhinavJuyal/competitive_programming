#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> num(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            c[i] = num[i] - (i + 1);
        }
        int res = 0;
        int z = 0;
        for (const int x : c)
        {
            if (x == 0)
            {
                z++;
            }
        }
        if (c[0] == 0 || c[n - 1] == 0)
        {
            res = 1;
        }
        else
        {
            res = 2;
        }
        if (z == n)
        {
            res = 0;
        }
        if (num[0] == n && num[n - 1] == 1)
        {
            res = 3;
        }
        cout << res;
        cout << "\n";
    }
}