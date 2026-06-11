#include <iostream>
using namespace std;

int main() {
  // when the value is true is return 1 and 0 for false
  // It required 1 Bytes of data in memory
  bool isSafe = true;

  cout << "Value of boolean variable is " << isSafe << endl;
  cout << "Size of boolean datatype is " << sizeof(bool) << " Byte" << endl;

  return 0;
}