#include <iostream>
using namespace std;

int main() {
  int age = 18;

  // this condition satisfied statement executed
  if (age == 18) {
    cout << "Age is 18" << endl;
  }

  // this condition not satisfied statement not executed
  if (age == 17) {
    cout << "Age is 17" << endl;
  }

  return 0;
}