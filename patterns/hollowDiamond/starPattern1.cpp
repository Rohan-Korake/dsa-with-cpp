#include <iostream>
using namespace std;

int main() {

  // Top side
  for (int i = 0; i < 4; i++) {
    // space
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << "   ";
    }

    // print star
    cout << " * ";

    // space
    for (int k = 0; k < i; k++) {
      cout << "   ";
    }

    // space
    for (int k = 1; k < i; k++) {
      cout << "   ";
    }

    // print star
    if (i != 0) {
      cout << " * ";
    }

    cout << endl;
  }

  // Bottom side
  for (int i = 0; i < 3; i++) {

    // space
    for (int j = 0; j < i + 1; j++) {
      cout << "   ";
    }

    // print star
    cout << " * ";

    // space
    for (int k = 1; k < 3 - i; k++) {
      cout << "   ";
    }

    // space
    for (int l = 0; l < 3 - i - 2; l++) {
      cout << "   ";
    }

    // print star
    if (i != 2) {
      cout << " * ";
    }

    cout << endl;
  }

  return 0;
}