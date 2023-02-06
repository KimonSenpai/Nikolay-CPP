#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int copy_n = n;
  int div = 2;
  while (div * div <= copy_n) {
    int count = 0;
    while (copy_n % div == 0) {
      copy_n /= div;
      count++;
    }
    if (count > 0) {
      cout << div << ' ' << count << endl;
    }
    div++;
  }

  if (copy_n > 1) {
    cout << copy_n << ' ' << 1 << endl;
  }
}