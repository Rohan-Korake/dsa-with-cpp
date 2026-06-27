#include <iostream>
using namespace std;

int main() {

  cout << "Normal ( int ) size will be " << sizeof(int) << " bytes" << endl;

  //   depends on the operating system and compiler
  cout << "Long Long ( int ) size will be " << sizeof(long long int) << " bytes"
       << endl;

  return 0;
}