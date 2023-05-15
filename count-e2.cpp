#include <iostream>
#include <iomanip>
using namespace std;

double pow(double a, int n) {
  if (n == 0) return 1;

  if (n % 2 == 0) {
    return pow(a*a, n / 2);
  } else {
    return pow(a, n - 1) * a;
  }
}

double fact(int n) {
  double res = 1;
  for(int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}
const int n = 30;
double exp(double x) {
  double res = 0;
  for (int i = 0; i < n; ++i) {
    res += pow(x, i)/fact(i);
  }
  return res;
}

int main() {
  double l = 1, r = 3;

  for (int i = 0; i < 1000; ++i) {
    double mid = l + (r - l) / 2;
    if (mid < exp(1)) {
      l = mid;
    } else {
      r = mid;
    }
  }

  cout << fixed << setprecision(18) << l;
}