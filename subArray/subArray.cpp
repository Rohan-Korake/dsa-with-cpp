#include <iostream>
using namespace std;

// total number of sub array = n * (n+1)/2
int main() {

  int arr[5] = {1, 2, 3, 4, 5};

  for (int start = 0; start < 5; start++) {
    for (int end = start; end < 5; end++) {
      for (int i = start; i <= end; i++) {

        cout << arr[i] << " ";
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}