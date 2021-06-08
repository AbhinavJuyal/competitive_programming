#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    std::multimap<int,int> m;
    for(int i = 1; i <= n; i++) {
        int x;
        std::cin>>x;
        m.insert(std::make_pair(x,i));
    }
    std::pair <std::multimap<int,int>::iterator, std::multimap<int,int>::iterator> ret;
    ret = m.equal_range(m.begin()->first);
    std::multimap<int,int>::iterator it = ret.second;
    it--;
    int idxmn = it->second;
    ret = m.equal_range(m.rbegin()->first);
    it = ret.first;
    int idxmx = it->second;
    if(idxmx > idxmn) {
        idxmn++;
    }
    std::cout<<n - idxmn + idxmx - 1;
}