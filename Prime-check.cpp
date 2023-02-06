#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int div = 2;
  bool isPrime = true;
  while (div*div <= n) {
    if (n % div == 0) {
      isPrime = false;
      break;
    }
    ++div;
  }
  if (isPrime) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}