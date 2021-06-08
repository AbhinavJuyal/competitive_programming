#include <iostream>
#include <string>

int main() {
    int n;
    std::cin>>n;
    int count = 0;
    while(n--) {
        std::string s;
        std::cin>>s;
        if(s[1] == '+')
            count++;
        else
            count--;
    }
    std::cout<<count;
    return 0;
}