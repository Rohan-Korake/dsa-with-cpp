#include <iostream>
using namespace std;

int main() {
  int containerHeight[] = {1, 4, 2, 5, 6, 3, 7, 8, 5, 8};
  int size = sizeof(containerHeight) / sizeof(containerHeight[0]);
  int leftPtr = 0, rightPtr = size - 1, height = 0, width = 0, currentWater = 0,
      maxWater = 0;

  while (leftPtr < rightPtr) {
    width = rightPtr - leftPtr;
    height = min(containerHeight[leftPtr], containerHeight[rightPtr]);
    currentWater = width * height;
    maxWater = max(maxWater, currentWater);

    if (containerHeight[leftPtr] < containerHeight[rightPtr]) {
      leftPtr++;
    } else {
      rightPtr--;
    }
  }

  cout << "Maxwater : " << maxWater << endl;
  return 0;
}