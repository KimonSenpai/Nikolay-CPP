#include <iostream>
using std::cin, std::cout;

void f(int val, int div = 2) {
  if (div*div > val) {
    cout << val;
    return;
  }

  if (val % div == 0) {
    cout << div << ' ';
    f(val/div, div);
  } else {
    f(val, div + 1);
  }
}

int main() {
  int val;
  cin >> val;
  f(val);
  cout << '\n';
  return 0;
}