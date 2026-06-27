#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 3, 4};

  // front function
  cout << "Value of vector at 0 is " << vec.at(0) << endl;

  return 0;
}