#include <iostream>
using namespace std;

int main() {
  int containerHeight[] = {1, 4, 2, 5, 6, 3, 7, 8, 5, 8};
  int size = sizeof(containerHeight) / sizeof(containerHeight[0]);
  int maxWater = 0, width = 0, height = 0, area = 0;

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j <= size - 1; j++) {
      width = j - i;
      height = min(containerHeight[i], containerHeight[j]);
      area = width * height;
      maxWater = max(maxWater, area);
    }
  }

  cout << "Maxwater : " << maxWater << endl;

  return 0;
}