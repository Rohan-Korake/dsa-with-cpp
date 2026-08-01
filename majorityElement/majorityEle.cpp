#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 1, 1, 4};
  int freq = 0;

  for (int i = 0; i < 5; i++) {
    freq = 0;
    for (int j = 0; j < 5; j++) {
      if (arr[j] == arr[i]) {
        freq++;
      }
    }
    if (freq > (5 / 2)) {
      cout << "Majority element is " << arr[i] << endl;
      return 0;
    }
  }

  return 0;
}