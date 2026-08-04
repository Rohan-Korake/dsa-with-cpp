#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int size = 0;

  cout << "Enter the number of size bars : ";
  cin >> size;
  if (size <= 0)
    return 0;

  int containerHeight[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter size for bar " << i + 1 << " : ";
    cin >> containerHeight[i];
  }

  int maxWater = 0;
  int leftBar = 0, rightBar = 0;
  int bestWidth = 0, bestHeight = 0;

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      int width = j - i;
      int height = min(containerHeight[i], containerHeight[j]);
      int area = width * height;

      if (maxWater < area) {
        maxWater = area;
        leftBar = containerHeight[i];
        rightBar = containerHeight[j];
        bestWidth = width;
        bestHeight = height;
      }
    }
  }

  cout << "\nBars : " << leftBar << " and " << rightBar << endl;
  cout << "Widtht: " << bestWidth << endl;
  cout << "Height: " << bestHeight << endl;
  cout << "Max water : " << maxWater << endl;

  return 0;
}