#include <vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices) {

  int buyPrice = prices[0], profit = 0;
  for (int i = 1; i < prices.size(); i++) {

    if (prices[i] < buyPrice) {
      buyPrice = prices[i];
    } else {
      profit = std::max(profit, prices[i] - buyPrice);
    }

  }
    
  return profit;   
}