#include <iostream>
using namespace std;

int changeValue(int &num) {
  cout << "value of num form chnageValue function " << num << endl;
  return (num += 10);
}

int main() {
  int num = 10;
  cout << "value of num form main function before calling " << num << endl;
  changeValue(num);
  cout << "value of num form main function after calling " << num << endl;
  return 0;
}