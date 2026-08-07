#include <iostream>
#include <vector>
using namespace std;

int main() {
  int nums[] = {1, 2, 3, 4};
  int size = sizeof(nums) / sizeof(nums[0]);
  vector<int> prefix(size, 1);
  vector<int> suffix(size, 1);
  vector<int> ans(size);

  //   prefix
  for (int i = 1; i < size; i++) {
    prefix[i] = prefix[i - 1] * nums[i - 1];
  }

  //   suffix
  for (int i = size - 2; i >= 0; i--) {
    suffix[i] = suffix[i + 1] * nums[i + 1];
  }

  //   product
  for (int i = 0; i < size; i++) {
    ans[i] = prefix[i] * suffix[i];
  }

  cout << "Final product array except self : ";
  for (int i = 0; i < size; i++) {
    cout << " " << ans[i] << " ";
  }

  cout << endl;

  return 0;
}