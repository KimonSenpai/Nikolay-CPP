#include <iostream>
#include <cmath> //math
using namespace std;

/*
Есть окружность длины L. Найти площадь круга, 
ограниченного данной окружностью.
*/

int main() {
  double L; //double - вещественное число (двойной точности).
  cout << "L = ";
  cin >> L;
  double r, S;
  double pi = acos(-1);
  r = L / (2*pi);
  S = pi*r*r;
  cout << "S = " << S << endl;
}