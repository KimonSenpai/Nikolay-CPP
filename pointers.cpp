#include <iostream>
using namespace std;

namespace A {
int f() {
  return 5;
}
}

namespace B {
int f() {
  return 7;
}
}

int main() {
  volatile int k;
  int a = 5;
  int* b = &a;
  int c = 7;
  int* d = &c;
  
  cout << b << ' ' << d << '\n';
  cout << b + 1 << ' ' << b - 1 << ' ' << d - b << '\n';

  cout << a << ' ' << c << '\n';
  *d = 20;
  *(d + 1) = 30;
  b[-1] = 40;
  (-1)[b] = 50;
  cout << a << ' ' << c << '\n';
}