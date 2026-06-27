#include <iostream>
using namespace std;

int main() {
  int size = 5, values[size];

  // Input array
  for (int i = 0; i < size; i++) {
    cout << "Enter value of index " << i << " : ";
    cin >> values[i];
  }

  // Display input array
  for (int i = 0; i < size; i++) {
    cout << " " << values[i] << " ";
  }

  cout << endl;
  return 0;
}