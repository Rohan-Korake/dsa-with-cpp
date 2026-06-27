#include <iostream>
using namespace std;

int decToBin(int decNum) {
  int rem = 0, pow = 1, result = 0;

  while (decNum > 0) {
    rem = decNum % 2;
    decNum /= 2;
    result += (rem * pow);
    pow *= 10;
  }
  return result;
}

int main() {
  int inputNum = 0;

  cout << "Enter the decimal num : ";
  cin >> inputNum;
  cout << "Binary will be : " << decToBin(inputNum) << endl;

  return 0;
}