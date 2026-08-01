#include <iostream>
using namespace std;

int main() {
  int n = 4;

  //   Cubic Complexity O(n^3)
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      for (int k = 1; k < n; k++) {
        cout << "Outer Loop index : " << i << endl;
        cout << "Middle Loop index : " << j << endl;
        cout << "Inner Loop index : " << k << endl;
      }
    }
  }

  return 0;
}