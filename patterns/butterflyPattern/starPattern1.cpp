#include <iostream>
using namespace std;

int main() {
  int n = 4;

  // top side
  for (int i = 0; i < n; i++) {

    // top left side star
    for (int j = 0; j < i + 1; j++) {
      cout << " * ";
    }

    // top left side space
    for (int k = 0; k < n - i - 1; k++) {
      cout << "   ";
    }

    // top right side space
    for (int l = 0; l < n - i - 1; l++) {
      cout << "   ";
    }

    // top right side star
    for (int m = 0; m < i + 1; m++) {
      cout << " * ";
    }

    cout << endl;
  }

  // bottom side
  for (int i = 0; i < n; i++) {
    // bottom left side star
    for (int j = 0; j < n - i; j++) {
      cout << " * ";
    }

    // bottom left side space
    for (int k = 0; k < i; k++) {
      cout << "   ";
    }

    // bottom right side space
    for (int l = 0; l < i; l++) {
      cout << "   ";
    }

    // bottom right side star
    for (int m = 0; m < n - i; m++) {
      cout << " * ";
    }

    cout << endl;
  }

  return 0;
}