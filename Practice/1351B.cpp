#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, b1;
        cin >> a1 >> b1;
        int a2, b2;
        cin >> a2 >> b2;
        int size = max(a1, b1);
        int p1 = min(a1, b1);
        int p2 = min(a2, b2);
        if (size == p1 + p2 && size == max(a2, b2))
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
}