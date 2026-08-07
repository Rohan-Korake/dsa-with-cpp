#include <iostream>
#include <vector>
using namespace std;

int main() {
  int nums[] = {1, 2, 3, 4};
  int size = sizeof(nums) / sizeof(nums[0]);
  vector<int> ans(size, 1);
  int suffix = 1;

  //   direclty store the prefix into asn vector
  for (int i = 1; i < size; i++) {
    ans[i] = ans[i - 1] * nums[i - 1];
  }

  //   calculate the ith suffix and store the product
  for (int i = size - 2; i >= 0; i--) {
    suffix *= nums[i + 1];
    ans[i] *= suffix;
  }

  //   display the product array
  cout << "Final product array except self : ";
  for (int i = 0; i < size; i++) {
    cout << " " << ans[i] << " ";
  }

  cout << endl;
  return 0;
}