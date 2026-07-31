#include <climits>
#include <iostream>
using namespace std;

int main() {
  int arr[7] = {3, -1, 5, 4, -1, 7, -8};

  int sum = 0;
  int maxSum = INT_MIN;

  for (int start = 0; start < 7; start++) {
    sum = 0;
    for (int end = start; end < 7; end++) {

      sum += arr[end];

      if (maxSum < sum) {
        maxSum = sum;
      }
    }
  }

  cout << "Sum of the sub array will be " << maxSum << endl;
  return 0;
}