#include <iostream>
using namespace std;

int main() {
  // array declaration
  int values[5];

  // array intialization
  values[0] = 10;
  cout << "Array of index 0 is " << values[0] << endl;

  values[1] = 20;
  cout << "Array of index 1 is " << values[1] << endl;

  values[2] = 30;
  cout << "Array of index 2 is " << values[2] << endl;

  values[3] = 40;
  cout << "Array of index 3 is " << values[3] << endl;

  values[4] = 50;
  cout << "Array of index 4 is " << values[4] << endl;

  // array delaration with intilization
  int marks[5] = {90, 99, 98, 96, 94};

  cout << "value of marks array at index 4 is " << marks[4] << endl;

  return 0;
}
