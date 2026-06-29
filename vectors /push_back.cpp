#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> vec = {1, 2, 3, 4};

  // push back function
  vec.push_back(5);

  cout << "Vector value is ";
  for (int val : vec) {
    cout << " " << val << " ";
  }
  cout << "\nVector size is " << (vec.size()) << endl;

  return 0;
}