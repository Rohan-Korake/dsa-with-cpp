#include <iostream>
using namespace std;

int main() {
  int num = 1;

  //   This will fisrt ececute and then check the condition
  do {
    cout << "Next number is " << num << endl;
    num++;
  } while (num <= 5);

  return 0;
}