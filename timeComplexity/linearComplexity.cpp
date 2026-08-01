#include <iostream>
using namespace std;

int main() {
  int fact = 1, n = 5;

  //   Linear complexity
  //   O( n * k ) ignore the constant
  //   O( n ) this is the time complexity for this operation
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }

  cout << "Factorial of " << n << " will be " << fact << endl;
  return 0;
}