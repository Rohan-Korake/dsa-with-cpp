
#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int target = 4, left = 0, right = 4, mid = 0;

  //   logarithmic complexity O(logn)
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == target) {
      cout << "Target found at index " << mid << endl;
      return 0;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  cout << "Element not found -1" << endl;

  return 0;
}

// first round n
// Second round n/2
// Third round n/4
// Fourth round n/8
// ....