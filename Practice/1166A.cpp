#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    string s[n];
    map<char, int> count;
    for (string &i : s)
    {
        cin >> i;
        count[i[0]]++;
    }
    for (auto const &i : count)
    {
        int a = i.second / 2;
        int b = i.second - a;
        res += a * (a - 1) / 2;
        res += b * (b - 1) / 2;
    }
    cout << res;
}