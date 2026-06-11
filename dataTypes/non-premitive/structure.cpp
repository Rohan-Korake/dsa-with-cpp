#include <iostream>
using namespace std;

// Instead of creating separate variables
struct MyStruct {
  string name;
  int age;
};

int main() {
  // It required 32 Bytes of data in memory
  MyStruct mystruct;

  mystruct.name = "Alex";
  mystruct.age = 19;

  cout << "Value of Struct name is " << mystruct.name << endl;
  cout << "Value of Struct age is " << mystruct.age << endl;
  cout << "Size of Struct datatype is " << sizeof(MyStruct) << " Bytes" << endl;

  return 0;
}