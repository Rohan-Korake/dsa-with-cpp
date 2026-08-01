#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cout << "Enter the value of Num1 : ";
  cin >> num1;
  cout << "Enter the value of Num2 : ";
  cin >> num2;

  // Constant Time O(1) which is parallel to the input size
  int sum = num1 + num2;
  cout << "Sum of two number is " << sum << endl;

  return 0;
}