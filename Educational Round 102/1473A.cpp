#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int t, n, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        int c = -1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d)
            {
                c = i;
                break;
            }
        }
        if (c == -1)
        {
            cout << "YES" << endl;
        }
        else if (a[0] + a[1] > d)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}