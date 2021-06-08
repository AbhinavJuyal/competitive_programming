#include <bits/stdc++.h>

int main() {
    int b[4];
    std::vector<int> a;
    for(int i = 0; i < 4; i++) {
        std::cin>>b[i];
        std::vector<int>::iterator it = find(a.begin(),a.end(),b[i]);
        if(it == a.end())
            a.push_back(b[i]);
    }
    std::cout<<4-a.size();
    return 0;
}