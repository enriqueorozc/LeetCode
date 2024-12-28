#include <vector>

std::vector<int> getConcatenation(std::vector<int>& nums) {

  int numLength = nums.size();
  std::vector<int> ans(numLength * 2, 0);

  for (int i = 0; i < numLength; i++) {
      ans[i] = nums[i];
      ans[i + numLength] = nums[i];
  }

  return ans;
}