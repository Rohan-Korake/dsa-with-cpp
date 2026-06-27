#include <iostream>
using namespace std;
int var = 10; // global declaration

int main() {
  if (true) {
    cout << "Value of var is " << var << endl;
  }

  cout << "Value of var is " << var << endl;
  return 0;
}