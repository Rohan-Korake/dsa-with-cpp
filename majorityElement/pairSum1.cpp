#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 3, 5, 7, 9};
  int target = 8;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i] + arr[j] == target) {
        cout << "Sum of array index [" << i << " , " << j << "] is "
             << arr[i] + arr[j] << endl;
      }
    }
  }

  return 0;
}