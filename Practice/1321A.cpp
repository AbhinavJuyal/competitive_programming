#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<int> r(n);
    vector<int> b(n);
    float r1 = 0;
    float b1 = 0;
    for (int &x : r)
    {
        cin >> x;
        if (x == 1)
            r1++;
    }
    for (int &x : b)
    {
        cin >> x;
        if (x == 1)
            b1++;
    }
    float valid = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 1 && b[i] == 0)
            valid++;
    }
    if (valid == 0)
    {
        cout << "-1";
        exit(0);
    }
    int diff = b1 - r1;
    if (diff < 0)
    {
        cout << "1";
    }
    else
    {
        cout << ceil(((b1 - r1 + 1) / valid) + 1);
    }
}