#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin>>s;
    std::string s1;
    for(const auto x : s) {
        if(s1.find(x) == std::string::npos)
            s1.push_back(x);
    }
    int size = s1.size();
    if(size % 2 == 0)
        std::cout<<"CHAT WITH HER!";
    else
        std::cout<<"IGNORE HIM!";
    return 0;
}