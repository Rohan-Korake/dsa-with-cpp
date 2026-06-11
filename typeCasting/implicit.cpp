#include <iostream>
using namespace std;

// Small datatype to big datatype [automatic conversion]
int main() {
  cout << "Before Implicit conversion" << endl;
  char grade = 'A';
  cout << "Value :" << grade << endl;

  cout << "After Implicit conversion" << endl;
  int value = grade;
  cout << "Value : " << value << endl;

  return 0;
}