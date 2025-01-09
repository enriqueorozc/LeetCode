#include <string>

std::string reversePrefix(std::string word, char ch) {

  // First Occurence: O(n)

  int firstOccurence = -1;
  for (int i = 0; i < word.length(); i++) {

    if (word[i] == ch) {
      firstOccurence = i;
      break;
    }

  }

  // DNE -> Return:
  if (firstOccurence == -1)
    return word;

  
  // Copy String: O(n)
  std::string copyWord = word;
  int left = 0, right = firstOccurence;
  while (left <= firstOccurence) {

    word[left] = copyWord[right];
    right--;
    left++;

  }

  return word;
}