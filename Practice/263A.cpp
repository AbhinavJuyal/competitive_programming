#include <iostream>
using namespace std;

int main() {
    int a[5][5];
    int si = 0,sj = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin>>a[i][j];
            if(a[i][j] == 1) {
                si = i;
                sj = j;
            }
        }
    }
    cout<<abs(sj - 2) + abs(si - 2);
    return 0;
}