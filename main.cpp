#include <iostream>
#include "src/prime.hpp"
using namespace std;

int main() {
  Factorizer f;

  cout << "Prime Factorization Examples" << endl;
  cout << "=============================" << endl;

  int numbers[] = {100, 35, 24, 145, 0, 1, -5};

  for (int n : numbers) {
    vector<int> result = f.primeFactors(n);
    cout << n << " = ";
    if (result.empty()) {
      cout << "[]";
    } else {
      for (int i = 0; i < result.size(); i++) {
        if (i > 0) cout << " x ";
        cout << result[i];
      }
    }
    cout << endl;
  }

  return 0;
}