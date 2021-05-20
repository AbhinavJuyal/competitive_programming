#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n;
    int i = 4126, j = 4126;
    int flag = 0;
    vector<int> arr;
    while (x--)
    {
        int a, b;
        cin >> a >> b;
        arr.push_back(b - a);
        if (a > i && b > j)
        {
            flag = 1;
        }
        i = a;
        j = b;
    }
    int z = 0;
    for (const int x : arr)
    {
        if (x == 0)
        {
            z++;
        }
    }
    string res = "rated";
    if (n == z)
    {
        res = "maybe";
    }
    if (flag == 1 && n == z)
    {
        res = "unrated";
    }
    cout << res;
}