#include <iostream>
using namespace std;

int main() {
  int arr[7] = {3, -4, 5, 4, -1, 7, -8};
  int currentSum = 0, maxSum = INT_MIN;

  for (int i = 0; i < 7; i++) {
    currentSum += arr[i];
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0) {
      currentSum = 0;
    }
  }

  cout << "Max Sum will be " << maxSum << endl;
  return 0;
}