#include <iostream>
#include <string>  
#include <cstring> 
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    int l = 0, u = 0;
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char x = s[i];
        if (isupper(x))
            u++;
        else
            l++;
    }
    if (u > l)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}