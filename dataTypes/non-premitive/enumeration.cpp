#include <iostream>
using namespace std;

// give names to numbers.
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
  // This will returns 0 if we want starts form one then simply we have to use
  // RED=1 in the enumeration
  TrafficLight signal = RED;

  cout << "Value of signal is " << signal << endl;

  return 0;
}