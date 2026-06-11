#include <iostream>
using namespace std;

// Big datatype to small datatype [Manual casting]
int main() {
  cout << "Before Explicit Type Casting" << endl;
  double price = 100.99;
  cout << "Value : " << price << endl;

  cout << "After Explicit Type Casting" << endl;
  int newPrice = (int)price;
  cout << "Value : " << newPrice << endl;
  return 0;
}