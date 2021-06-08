#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::map<int,int> m;
    for (int i = 0; i < n; i++)
    {   
        int x;
        std::cin >> x;
        m[x]++;
    }
    int mx = 0;
    for(std::pair<int,int> x : m) {
        if(x.second > mx) {
            mx = x.second;
        }
    }
    std::cout<<mx<<" "<<m.size();
}