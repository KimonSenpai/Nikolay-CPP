#include <iostream>
#include <cmath>
using namespace std;

void PrintInt(int n) {
  cout << n << '\n';
}

int Square(int n) {
  return n*n;
}

double sin(double phi) {
  double res = phi - phi*phi*phi/6 + phi*phi*phi*phi*phi/120;
  return res;
}

bool is_prime(int val) {
  for (int div = 2; Square(div) <= val; ++div) {
    if (val % div == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int val;
  cin >> val;
  
  PrintInt(val);
  PrintInt(val + 2);

  PrintInt(Square(val));

  cout << sin(acos(-1)/4);
}