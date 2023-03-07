#include <iostream>
#include <cmath>
using namespace std;

void PrintInt(int n) {
  cout << n << '\n';
}

int Square(int n) {
  return n*n;
}

double my_pow(double x, int n) {
  double res = 1;
  for (int i = 1; i <= n; i++) {
    res *= x;
  }
  return res;
}

int fact(int n) {
  int res = 1;
  for (int i = 1; i <= n; ++i) {
    res *= i;
  }
  return res;
}

double my_sin_old(double phi) {
  double res = phi - phi*phi*phi/6 + phi*phi*phi*phi*phi/120;
  return res;
}

double my_sin(double phi) {
  double res = 1;
  int sign = 1;
  for (int i = 1; i <= 13; i += 2) {
    res += sign*my_pow(phi, i)/fact(i);
    sign *= -1;
  }
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

  cout << my_sin(acos(-1)/4);
}