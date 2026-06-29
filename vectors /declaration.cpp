#include <iostream>
#include <vector>
using namespace std;

int main() {

  // vector declaration
  vector<int> vec; // by defualt this is 0

  // This will show error "segmentation fault"
  cout << vec[0] << endl;

  return 0;
}

// run command
// mac/linux : g++ -std=c++11 declaration.cpp && ./a.out
// windows :  g++ -std=c++11 declaration.cpp && .\a.exe