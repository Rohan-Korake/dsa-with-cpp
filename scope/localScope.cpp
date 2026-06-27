#include <iostream>
using namespace std;

int main() {
  if (true) {
    int var = 10;
    cout << "Value of var is " << var << endl;
  }

  //   this will show eror (use of undeclared identifier 'var')
  //   cout << "Value of var is " << var << endl;
  return 0;
}