#include <iostream>
using namespace std;

// function definition with parameter and there datatype
int showData(string name, int age) {
  cout << "Name : " << name << endl;
  cout << "Age : " << age << endl;
  return 0;
}

int main() {
  string name = "Coder";
  int age = 18;
  showData(name, age); // passing argument 
  return 0;
}