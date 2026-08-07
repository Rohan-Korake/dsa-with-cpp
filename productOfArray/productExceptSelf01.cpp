#include <iostream>
#include <vector>
using namespace std;

int main() {
  int nums[] = {1, 2, 3, 4};
  vector<int> productArray;
  int size = sizeof(nums) / sizeof(nums[0]);
  int product = 1;

  for (int i = 0; i < size; i++) {
    product = 1;
    for (int j = 0; j < size; j++) {
      if (i != j) {
        product *= nums[j];
      }
    }
    productArray.push_back(product);
  }

  cout << "Final product array except self : ";
  for (int i = 0; i < size; i++) {
    cout << " " << productArray[i] << " ";
  }
  cout << endl;

  return 0;
}