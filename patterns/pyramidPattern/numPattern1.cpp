#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) {
    // space
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << "   ";
    }

    // left part
    for (int k = 1; k <= i + 1; k++) {
      cout << " " << k << " ";
    }

    // right side
    for (int l = i; l > 0; l--) {
      cout << " " << l << " ";
    }

    // change line
    cout << endl;
  }

  return 0;
}