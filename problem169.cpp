#include <cmath>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int>& nums) {
        
  std::unordered_map<int, int> tracker;
  for (const auto& num : nums) {
    tracker[num] = 0;
  }

  for (const auto& num : nums) {
    tracker[num]++;
  }

  int numsSize = nums.size();
  for (const auto& num : nums) {

    if (tracker[num] > floor(numsSize / 2)) {
      return num;
    }

  }

  return -1;
}