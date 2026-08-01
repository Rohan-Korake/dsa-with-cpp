#include <iostream>
using namespace std;

int main() {
  // sorted array
  int arr[5] = {1, 3, 5, 7, 9};
  int target = 8, ptr1 = 0, ptr2 = 4;

  for (int i = 0; i < ptr2; i++) {
    if (arr[ptr1] + arr[ptr2] < target) {
      ptr1++;
    } else if (arr[ptr1] + arr[ptr2] > target) {
      ptr2--;
    } else if (arr[ptr1] + arr[ptr2] == target) {
      cout << "Sum of array index [" << ptr1 << " , " << ptr2 << "] is "
           << arr[ptr1] + arr[ptr2] << endl;
    }
  }

  return 0;
}