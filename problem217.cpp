#include <unordered_map>
#include <vector>

bool containsDuplicate(std::vector<int>& nums) {

  std::unordered_map<int, int> tracker;
  for (const auto& num : nums) {
    tracker[num] = 0;
  }

  for (const auto& num : nums) {
    tracker[num]++;

    if (tracker[num] > 1) 
      return true;

  }

  return false;
}