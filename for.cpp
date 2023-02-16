#include <iostream>
using namespace std;


int main() {
  for (int n = 5;; n *= n) {
    cout << n << '\n';
  }
}