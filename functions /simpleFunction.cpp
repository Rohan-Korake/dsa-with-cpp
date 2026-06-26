#include <iostream>
using namespace std;

// define function with return type void
void sayHello() {
  cout << "Hello from sayHello function" << endl;
  return;
}

// define function with return type int
int greet() {
  cout << "Welcome from greet function" << endl;
  return 0;
}

int main() {
  cout << "This is main function" << endl;
  greet(); // function call
  sayHello();
  return 0;
}