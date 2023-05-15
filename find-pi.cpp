#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double my_pow(double x, int n) {
  double res = 1;
  for (int i = 1; i <= n; i++) {
    res *= x;
  }
  return res;
}

double fact(int n) {
  double res = 1;
  for (int i = 1; i <= n; ++i) {
    res *= i;
  }
  return res;
}

double my_sin(double phi) {
  double res = 0;
  double sign = 1;
  for (int i = 1; i <= 25; i += 2) {
    res += sign*my_pow(phi, i)/fact(i);
    sign *= -1;
  }
  return res;
}
double f(double x) {
  return my_sin(x);
}

int main() {
  cout << fixed << setprecision(15);

  double l = 3, r = 4;

  for (int i = 0; i < 100000; ++i) {
    double mid = l + (-l + r)/2;

    if (f(l)*f(mid) < 0) {
      r = mid;
    } else {
      l = mid;
    }
  }
   cout << (l + r) / 2 << '\n' << f((l + r) / 2);
}