#include <iostream>
using namespace std;

int main() {
  long binNumber = 10;
  double ans = 1, x = 2.00000;

  if (binNumber == 0)
    return 1; //   becuase num ^ 0 = 1

  if (x == 0)
    return 0; // becuase num ^ 0 = 0

  if (x == 1)
    return 1; // because num ^ 1 = 1

  if (x == -1 && binNumber % 2 == 0)
    return 1; // becuase -1 ^ even number = +1

  if (x == -1 && binNumber % 2 != 0)
    return -1; // becuase -1 ^ odd number = -1

  //   if it is positive convert this into positive
  //   becuase num ^ -n = (1 /num) ^ n
  if (binNumber < 0) {
    x = 1 / x;
    binNumber = -binNumber;
  }

  //   main logic with O(n) TC
  while (binNumber > 0) {
    if (binNumber % 2 == 1) {
      ans *= x;
    }

    x *= x;
    binNumber /= 2;
  }

  cout << ans << endl;
  return 0;
}