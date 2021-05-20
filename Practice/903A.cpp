#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n;
    while (i--)
    {
        float x;
        cin >> x;
        double a = -1.0, b = 0.0;
        for (b = 0.0; b <= x / 7; b++)
        {
            a = ((x - (7 * b)) / 3);
            if (fmod(a,1.0) == 0)
            {
                break;
            }
            else
            {
                a = -1;
            }
        }
        if (a != -1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
}