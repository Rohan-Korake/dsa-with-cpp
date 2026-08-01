#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 2, 1, 4};
  int freq = 0, element = 0;

  //   find the mejority element
  for (int i = 0; i < 5; i++) {
    if (freq == 0) {
      element = arr[i];
    }
    if (element == arr[i]) {
      freq++;
    } else {
      freq--;
    }
  }

  //   count the majority element
  int counter = 0;
  for (int i = 0; i < 5; i++) {
    if (arr[i] == element) {
      counter++;
    }
  }

  //   validate the mejority element
  if (counter > (5 / 2)) {
    cout << "Majority element is " << element << endl;
  } else {
    cout << "Majority element is -1" << endl;
  }

  return 0;
}