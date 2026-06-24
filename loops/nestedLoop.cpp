#include <iostream>
using namespace std;

int main() {

  // loop inside the outer loop
  for (int i = 0; i < 3; i++) {   // outer loop run 3 times and exit
    for (int j = 0; j < 3; j++) { // inner loop runs 3 times and exit
      cout << " O ";
    }
    cout << endl;
  }

  return 0;
}