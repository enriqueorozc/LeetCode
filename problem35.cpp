#include <vector>

int searchInsert(std::vector<int>& nums, int target) {

  int left = 0, right = nums.size() - 1;

  while (left <= right) {

    int middle = (left + right) / 2;

    if (nums[middle] == target) {
      return middle;
    } else if (nums[middle] < target) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }

  }

  return left;
} 