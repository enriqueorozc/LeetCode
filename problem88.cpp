#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

  int leftArr = (m - 1), rightArr = (n - 1);
  int currentPos = (m + n) - 1;

  while (leftArr >= 0 && rightArr >= 0) {

    if (nums1[leftArr] > nums2[rightArr]) {
      nums1[currentPos] = nums1[leftArr];
      leftArr--;
    } else {
      nums1[currentPos] = nums2[rightArr];
      rightArr--;
    }
      
    currentPos--;
  }

  while (rightArr >= 0) {
    nums1[currentPos] = nums2[rightArr];
    currentPos--;
    rightArr--;
  }
    
}