#include <iostream>
#include <vector>
using namespace std;

int main() {
  int nums[] = {1, 2, 3, 4};
  vector<int> productArray;
  int size = sizeof(nums) / sizeof(nums[0]);
  int product = 0, finalProduct = 1;

  for (int i = 0; i < size; i++) {
    finalProduct *= nums[i];
  }

  for (int i = 0; i < size; i++) {
    product = finalProduct / nums[i];
    productArray.push_back(product);
    product = 0;
  }

  cout << "Final product array except self : ";
  for (int i = 0; i < size; i++) {
    cout << " " << productArray[i] << " ";
  }
  cout << endl;

  return 0;
}