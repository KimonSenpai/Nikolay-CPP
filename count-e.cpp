#include <iostream>
#include <iomanip>
using namespace std;

long double pow(long double a, int n) {
  if (n == 0) return 1;

  if (n % 2 == 0) {
    return pow(a*a, n / 2);
  } else {
    return pow(a, n - 1) * a;
  }
}

// pow(2, 12) = pow(4, 6) = pow(16, 3) = pow(16, 2)*16 = pow(256, 1)*16 = pow(256, 0)*256*16 = 1*256*16 = 4096

int main() {
    long double power = 2000000000;
    long double e = pow(1.0 + 1.0/power, power);

    cout << fixed << setprecision(15) << e << '\n';
}