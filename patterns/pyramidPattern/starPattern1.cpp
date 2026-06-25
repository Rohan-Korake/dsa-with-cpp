#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) {
    // space
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << "   ";
    }

    // left side
    for (int k = 0; k < i + 1; k++) {
      cout << " * ";
    }

    for (int l = 0; l < i; l++) {
      cout << " * ";
    }

    cout << endl;
  }

  return 0;
}