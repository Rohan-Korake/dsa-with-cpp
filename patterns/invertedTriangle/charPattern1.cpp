#include <iostream>
using namespace std;

int main() {
  char ch = 'A';

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i; j++) {
      cout << "   ";
    }

    for (int k = 0; k < 4 - i; k++) {
      cout << " " << ch << " ";
    }
    ch++;
    cout << endl;
  }

  return 0;
}