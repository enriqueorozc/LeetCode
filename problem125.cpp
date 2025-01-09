#include <string>
#include <cctype>

bool isPalindrome(std::string s) {

  int left = 0, right = s.length() - 1;

  while (left <= right) {

    // Non-Alphanumeric Chars:
    if (!isalnum(s[left])) {
      left++; continue;
    } else if (!isalnum(s[right])) {
      right--; continue;
    }


    // Non-Palindrome:
    if (tolower(s[left]) != tolower(s[right])) {
      return false;
    }

    left++;
    right--;
  }
        

  return true;
}