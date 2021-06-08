#include <iostream>

bool isprime(int n) {
    if(n <= 1)
        return false;
    if(n <= 3)
        return true;

    if(n % 2 == 0 || n % 3 == 0)
        return false;

    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int n,m;
    std::cin>>n>>m;
    bool ans = false;
    bool ans1 = isprime(m);
    for(int i = n+1; i < m; i++) {
        if(isprime(i)) {
            ans = true;
            break;
        }
    }
    if(ans1 && !ans)
        std::cout<<"YES";
    else
        std::cout<<"NO";
    std::cout<<"\n";
}