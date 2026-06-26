#include <iostream>
using namespace std;

// function definition
int getInfo() {
  cout << "Name : Coder" << endl;
  return 19; // return value
}

int main() {
  int age = getInfo(); // get age value
  cout << "Age : " << age << endl;
  return 0;
}