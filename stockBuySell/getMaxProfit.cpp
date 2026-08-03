#include <iostream>
using namespace std;

int main() {
  int prices[] = {1, 4, 2, 5, 3, 6};
  int size = sizeof(prices) / sizeof(prices[0]);
  int maxProfit = 0, bestBuy = prices[0];

  for (int i = 0; i < size; i++) {
    if (prices[i] > bestBuy) {
      maxProfit = max(maxProfit, prices[i] - bestBuy);
    }

    bestBuy = min(bestBuy, prices[i]);
  }

  cout << "Max profit is " << maxProfit << endl;
  cout << "Best Buy is " << bestBuy << endl;

  return 0;
}