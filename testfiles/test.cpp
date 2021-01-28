// template <class t>
// class amaths {
//     private:
//         t a;
//         t b;
//     public:
//         amaths() {
//             a = 5;
//             b = 5;
//         }
//         amaths(t,t);
//         t add();
//         t subtract();
// };

// template <class t>
// amaths<t>::amaths(t a, t b) {
//     this->a = a;
//     this->b = b;
// }

// template<class t>
// t amaths<t>::add() {
//     return a + b;
// }

// template<class t>
// t amaths<t>::subtract() {
//     return a - b;
// }

// int main() {
//     amaths<double> ar(10.23,5.1);
//     cout<<ar.add();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define f(i,n) for(int i = 0; i < n; i++)
#define ll long long int

int main() 
{ 
  int *p = new int[5];
  int *p1 = (int*)malloc(5*sizeof(int));

  f(i,5) {
    p[i] = i;
    p1[i] = 5-i;
  }

  // f(i,5) {
  //   cout<<p[i]<<" "<<p1[i]<<endl;
  // }

  int *q = new int[10];
  int *q1 = (int*)malloc(10*sizeof(int));

  f(i,5) {
    q[i] = p[i];
    q1[i] = p1[i];
  }

  for(int i = 5; i < 10; i++) {
    q[i] = i;
    q1[i] = 10-i;
  }

  f(i,10) {
    cout<<q[i]<<" "<<q1[i]<<endl;
  }
  delete p;
  free(p);
  return 0;
}

