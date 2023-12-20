#include <iostream>
using namespace std;

int GCD(int a, int b) {
  return b == 0 ? a : GCD(b, a%b);
}

int GCD_loop(int a, int b) {
  while (b > 0) {
    int t = a % b;
    a = b;
    b = t;
  }

  return a;
}

int main() {

}