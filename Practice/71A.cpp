#include <bits/stdc++.h>

int main() {
    int n;
    std::string s;
    std::cin>>n;
    while(n--) {
        std::cin>>s;
        if(s.size() <= 10) {
            std::cout<<s<<"\n";
            continue;
        }
        int size = s.size();
        std::cout<<s[0]<<size-2<<s[size-1]<<"\n";
    }
    return 0;
}