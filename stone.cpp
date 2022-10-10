#include <iostream>
using namespace std;

/*
Камень подбросили вертикально вверх со скоростью V0. На какую 
высоту он подлетит.
*/
const double g = 9.81;
int main() {
  double V0;
  cout << "Input V0>>";
  cin >> V0;
  double h = V0*V0 / (2*g);
  cout << "h = " << h << endl;
  //cin >> V0;
  return 0;
}





//matr3 = [[[0]*10**6 for i in range(10**6)] for i in range(10**6)]