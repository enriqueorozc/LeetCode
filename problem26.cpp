#include <vector>

int removeDuplicates(std::vector<int>& nums) {

  int prevNum = nums[0];

  for (int i = 1; i < nums.size(); i++) {

    // Duplicate Check:
    if (nums[i] == prevNum) {
      nums.erase(nums.begin() + i);
      i--; 
    }

    prevNum = nums[i];

  }

  return nums.size();
}