#include <iostream>
using namespace std;

// a and b are the copy of agrument passed from main
int showMax(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int num1 = 10, num2 = 20;

  // passing argument and print result
  cout << "Max num will be " << showMax(num1, num2) << endl;

  return 0;
}