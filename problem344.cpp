#include <vector>

void reverseString(std::vector<char>& s) {

  int left = 0, right = s.size() - 1;
  while (left < right) {

    std::swap(s[left], s[right]);
    right--;
    left++;

  }
  
}