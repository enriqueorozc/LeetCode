#include <algorithm>
#include <vector>

double minimumAverage(std::vector<int>& nums) {

  std::vector<double> averages;

  int loopLimit = nums.size() / 2;
  int loopCounter = 0;

  while (loopCounter < loopLimit) {

    auto minIt = std::min_element(nums.begin(), nums.end());
    int minElement = *minIt;
    nums.erase(minIt);

    auto maxIt = std::max_element(nums.begin(), nums.end());
    int maxElement = *maxIt;
    nums.erase(maxIt);

    double result = (minElement + maxElement) / 2.00;

    averages.push_back(result);

    loopCounter++;
  }


  return (*(std::min_element(averages.begin(), averages.end())));
}