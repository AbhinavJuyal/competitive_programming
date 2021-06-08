#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string res;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            res.push_back('0');
        else if (s[i + 1] == '.')
        {
            res.push_back('1');
            i++;
        }
        else if (s[i + 1] == '-')
        {
            res.push_back('2');
            i++;
        }
    }
    cout<<res;
    return 0;
}