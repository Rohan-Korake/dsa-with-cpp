#include <iostream>
using namespace std;

int main() {
  // Array index starts with 0 and end size of array -1
  int numbers[5] = {1, 2, 3, 4, 5};

  cout << "Value at index 0 :" << numbers[0] << endl;
  cout << "Value at index 1 :" << numbers[1] << endl;
  cout << "Value at index 2 :" << numbers[2] << endl;
  cout << "Value at index 3 :" << numbers[3] << endl;
  cout << "Value at index 4 :" << numbers[4] << endl;

  cout << "Size of array is " << sizeof(numbers) << " Bytes" << endl;

  return 0;
}