#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int count = 0;
    while(n--) {
        int a,b,c;
        std::cin>>a>>b>>c;
        int s = a + b + c;
        if(s >= 2)
            count++;
    }
    std::cout<<count;
}