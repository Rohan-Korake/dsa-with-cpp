#include <iostream>
using namespace std;

int main() {

  for (int i = 0; i <= 4; i++) {

    // add space
    for (int j = 0; j < i; j++) {
      cout << "   ";
    }

    // show number
    for (int k = 0; k < 4 - i; k++) {
      cout << " " << i + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}