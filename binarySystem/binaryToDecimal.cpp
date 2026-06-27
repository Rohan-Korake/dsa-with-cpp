#include <iostream>
using namespace std;

int binToDec(int binNum) {
  int pow = 1, rem = 0, result = 0;

  while (binNum > 0) {
    rem = binNum % 10;   // seprate the last digit
    result += rem * pow; // multiply the last digit with power
    binNum /= 10;        // remove the digit from number
    pow *= 2;            // increase power
  }

  return result;
}

int main() {
  int inputNum = 0;
  cout << "Enter the binary number : ";
  cin >> inputNum;
  cout << "Decimal will be : " << binToDec(inputNum) << endl;
  return 0;
}