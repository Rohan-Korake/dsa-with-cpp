#include <iostream>
using namespace std;

// similar to a struct but is mainly used in OOP
class Student {
public:
  string name;
  int age;
};

int main() {
  // Create object of student class
  Student s1;

  s1.name = "Alex";
  s1.age = 19;

  cout << "Value of Student class name variable : " << s1.name << endl;
  cout << "Value of Student class age variable : " << s1.age << endl;
  cout << "Size of Student datatype is " << sizeof(Student) << " Bytes" << endl;

  return 0;
}