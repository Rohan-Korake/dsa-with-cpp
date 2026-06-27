#include <iostream>
#include <vector>
using namespace std;

int main() {
  // METHOD 01 to intialization
  // declaration and intialization
  vector<int> vec1 = {1, 2, 3, 4, 5};

  cout << vec1[0] << endl;

  // ----- or -------

  for (int val : vec1) {
    cout << val << endl;
  }

  // METHOD 02 to intialization '5' is the size '0' is the value
  vector<int> vec2(5, 0);
  cout << vec2[0] << endl;
  cout << vec2[1] << endl;

  return 0;
}

// run command
// mac/linux : g++ -std=c++11 initialization.cpp && ./a.out
// windows :  g++ -std=c++11 initialization.cpp && .\a.exe