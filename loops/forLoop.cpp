#include <iostream>
using namespace std;

int main() {
  int num = 10;

  // This will run still i not equal to num
  for (int i = 1; i <= num; i++) {
    cout << "Next number is " << i << endl;
  }

  return 0;
}