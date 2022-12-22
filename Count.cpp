#include <iostream>
using namespace std;

int main() {
  int n = 0;

  while (true) {
    int a;
    cin >> a;
    if (a == 0) {
      break;
    }
    ++n;
  }

  cout << n;
}