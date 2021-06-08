#include <iostream>

int main() {
    int al[26] = {0};
    std::string s,s1,pile;
    std::cin>>s>>s1>>pile;
    for(auto x : s) {
        al[x - 'A']++;
    }
    for(auto x : s1) {
        al[x - 'A']++;
    }
    for(auto x : pile) {
        al[x - 'A']--;
    }
    for(auto x : al) {
        if(x != 0) {
            std::cout<<"NO"<<"\n";
            exit(0);    
        }
    }
    std::cout<<"YES"<<"\n";
}