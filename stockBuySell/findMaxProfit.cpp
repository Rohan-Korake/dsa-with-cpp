#include <iostream>
using namespace std;

int main() {
  int priceListSize = 0;
  double bestBuy = 0, maxProfit = 0;

  cout << "Enter the size of price list (Integer) : ";
  cin >> priceListSize;
  if (priceListSize < 0)
    return 0;

  double stockPrices[priceListSize];

  cout << "Enter the stock prices " << endl;
  for (int i = 0; i < priceListSize; i++) {
    cout << "Enter the price for stock " << i + 1 << " : ";
    cin >> stockPrices[i];
  }

  bestBuy = stockPrices[0];

  for (int i = 0; i < priceListSize; i++) {
    if (stockPrices[i] > bestBuy) {
      maxProfit = max(maxProfit, stockPrices[i] - bestBuy);
    }
    bestBuy = min(bestBuy, stockPrices[i]);
  }

  cout << "Maximun profit : " << maxProfit << endl;
  cout << "Best buy is : " << bestBuy << endl;

  return 0;
}