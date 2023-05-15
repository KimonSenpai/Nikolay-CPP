#include <iostream>
#include <iomanip>
using namespace std;

double f(double x) {
  return 200 + 12*x + 11*x*x*x*x*x*x + x*x*x*x*x*x*x;
}

int main() {
  cout << fixed << setprecision(15);

  double l = -12, r = -10;

  for (int i = 0; i < 100000; ++i) {
    double mid = (l + r)/2;

    if (f(l)*f(mid) < 0) {
      r = mid;
    } else {
      l = mid;
    }
  }
   cout << (l + r) / 2 << '\n' << f((l + r) / 2);
}