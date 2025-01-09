#include <vector>

std::vector<int> twoSum(std::vector<int>& numbers, int target) {

  int firstIndex = 0, secondIndex = numbers.size() - 1;

  while (firstIndex < secondIndex) {

    int sum = numbers[firstIndex] + numbers[secondIndex];

    if (sum == target) {
      return std::vector<int>{firstIndex + 1, secondIndex + 1};
    } else if (sum < target) {
      firstIndex++;
    } else {
      secondIndex--;
    }

  }

  return std::vector<int>{-1, -1};
}