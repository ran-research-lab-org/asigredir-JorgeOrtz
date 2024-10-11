#include <iostream>
#include <format>
using namespace std;

int main() {
  int n;
  int t = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    t += n;
  }

  cout << "El Average es: " << t/10 << endl;
  return 0;
}