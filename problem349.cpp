#include <vector>
#include <unordered_map>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        
  std::unordered_map<int, int> uniqueCount;
  for (const auto& element: nums1) {
    uniqueCount[element] = 1;
  }

  std::vector<int> result;
  for (const auto& element: nums2) {
      
    if (uniqueCount[element] == 1) {
      result.push_back(element);
      uniqueCount[element]++;
    }

  }

  return result;
}