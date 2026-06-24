#include <iostream>
using namespace std;

int main() {
  int num = 5;
  // condition ? executed if true : execute if false
  cout << "Num is " << (num > 0 ? "Positive" : "Negative") << endl;
  return 0;
}