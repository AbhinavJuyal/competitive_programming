#include <iostream>
#include <string>

int main() {
    int n;
    int count = 0;
    std::string s;
    std::cin>>n>>s;
    for(int i = 0; i < n-1; i++) {
        if(s[i] == s[i+1])
            count++;
    }
    std::cout<<count;
    return 0;
}