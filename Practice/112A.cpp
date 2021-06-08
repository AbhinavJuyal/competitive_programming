#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

int main() {
    std::string s1,s2;
    std::cin>>s1>>s2;
    int n = s1.size();
    int i = 0;
    std::transform(s1.begin(),s1.end(),s1.begin(),tolower);
    std::transform(s2.begin(),s2.end(),s2.begin(),tolower);
    for(i = 0; i < n; i++) {
        if(s1[i] != s2[i])
            break;
    }
    int a1 = (int)(s1[i]);
    int a2 = (int)(s2[i]);
    int res;
    if(a1 > a2)
        res = 1;
    else if(a1 == a2)
        res = 0;
    else if(a1 < a2)
        res = -1;
    std::cout<<res;
    return 0;
}