#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin>>s;
    std::vector<int> a;
    for(const auto x : s) {
        if(x != '+')
            a.push_back(x - '0');
    }
    sort(a.begin(),a.end());
    int n = a.size();
    for(int i = 0; i < n; i++) {
        std::cout<<a[i];
        if(i != n-1)
            std::cout<<"+";
    }
    return 0;
}

// alternative:

// int main() {
//     int c1 = 0, c2 = 0, c3 = 0;
//     std::string s;
//     std::cin>>s;
//     for(const auto x : s) {
//         if(x == '1')
//             c1++;
//         else if (x == '2')
//             c2++;
//         else if (x == '3')
//             c3++;
//     }
//     while(c1 + c2 + c3 != 0) {
//         if(c1 > 0) {
//             std::cout<<1;
//             c1--;
//         } else if(c2 > 0) {
//             std::cout<<2;
//             c2--;
//         } else if(c3 > 0) {
//             std::cout<<3;
//             c3--;
//         }
//         if(c1+c2+c3 >= 1)
//             std::cout<<"+";
//     }
// }
