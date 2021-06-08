#include <iostream>
#include <string>
#include <bitset>

int main() {
    std::string s;
    std::string s1;
    std::cin>>s>>s1;
    std::string ans;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s1[i])
            ans.push_back('0');
        else
            ans.push_back('1');
    }
    std::cout<<ans;
}