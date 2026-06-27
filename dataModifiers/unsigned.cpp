#include <iostream>
using namespace std;

int main() {

  cout << "normal ( int ) size will be " << sizeof(int) << " bytes" << endl;

  // Allow only positive value
  cout << "UnSigned ( int ) size will be " << sizeof(unsigned int) << " bytes"
       << endl;
  return 0;
}