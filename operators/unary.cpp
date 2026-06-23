#include <iostream>
using namespace std;

int main() {

  int num = 5;

  // prefix operator
  cout << "Before Increment : " << ++num << endl;
  cout << "After Increment : " << num << endl;

  num = 5; // reset num tu understand difference

  cout << "Before Decrement : " << --num << endl;
  cout << "After Decrement : " << num << endl;

  num = 5; // reset num tu understand difference

  // postfix operator
  cout << "Before Increment : " << num++ << endl;
  cout << "After Increment : " << num << endl;

  num = 5; // reset num tu understand difference

  cout << "Before Decrement : " << num-- << endl;
  cout << "After Decrement : " << num << endl;

  return 0;
}