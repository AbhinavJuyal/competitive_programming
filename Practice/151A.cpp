#include <iostream>

int main() {
    int n, k, l, c, d, p, nl, np;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mn = std::min(p / np, std::min((k*l) / nl, (c*d) / 1));
    std::cout<<mn / n;
}