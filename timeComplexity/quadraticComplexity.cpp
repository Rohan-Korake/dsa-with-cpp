#include <iostream>
using namespace std;

// bubble sort
int main() {
  int arr[5] = {1, 4, 2, 5, 3};
  int n = 5;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  return 0;
}

// Find the complexity like this suppose n = 5
// for first iteration outer loop runs 1 time and
// the inner loop will runs n - i - 1 means 0 to 3

// so the time cimplexity will be
// = (n-4) * K + (n-3) * K + (n-2) * K + (n-1) * K
// = K * [(n-4) + (n-3) + (n-2) + (n-1)]
// = K * [n*(n-1) / 2]
// = Kn^2 / 2 - Kn / 2
// = n^2 / 2 - n / 2   ... ignore K constant
// = n^2 - n
// = n^2  ignore small term

// so the final quadratic time complexity is O(n^2)
