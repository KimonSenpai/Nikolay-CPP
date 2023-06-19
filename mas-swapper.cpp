#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  int* mas = new int[n];

  for (int i = 0; i < n; ++i) {
    cin >> mas[i];
  }

  for (int i = 0; i < n; i += 2) {
    int t = mas[i];
    mas[i] = mas[i + 1];
    mas[i + 1] = t;
  }

  for (int i = 0; i < n; ++i) {
    cout << mas[i] << ' ';
  }
  cout << endl;

  delete[] mas;
}