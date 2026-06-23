#include <iostream>
using namespace std;

int main() {
  int num1 = 5, num2 = 10;
  // 1 means true zero means false

  cout << "AND : " << (num1 && num2) << endl;
  cout << "OR : " << (num1 || num2) << endl;
  cout << "NOT : " << !(num1) << endl;

  return 0;
}