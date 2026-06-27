#include <iostream>
using namespace std;

int main() {
  int left = 5, right = 10;

  cout << "Bitwise AND ( & ) : " << (left & right) << endl;

  cout << "Bitwise OR ( | ) : " << (left | right) << endl;

  cout << "Bitwise XOR ( ^ ) : " << (left ^ right) << endl;

  // shift the binary bit to left by 1 and fill the empty bit with 0
  cout << "Bitwise Left Shift ( << ) : " << (left << 1) << endl;

  // shift the binary bit to right by 1 and fill the empty bit with 0
  cout << "Bitwise Right Shift ( >> ) : " << (right >> 1) << endl;

  return 0;
}