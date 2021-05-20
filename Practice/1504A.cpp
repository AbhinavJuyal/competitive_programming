#include <bits/stdc++.h>
using namespace std;

bool palin(const string &s)
{
    for (int64_t i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(!palin(s + 'a')) {
            cout<<"YES"<<"\n"<<s + 'a';
        } else if(!palin('a' + s)) {
            cout<<"YES"<<"\n"<<'a' + s;
        } else {
            cout<<"NO";
        }
        cout << "\n";
    }

    return 0;
}