#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {

  int digitsSize = digits.size();
  int overflow = 0;

  for (int i = (digitsSize - 1); i >= 0; i--) {

    // Increment Last:
    if (i == digitsSize - 1) {
      digits[i]++;
    }

    // Overflow:
    if (overflow) {
      digits[i]++;
      overflow = 0;
    }

    // Propagate:
    if (digits[i] > 9) {
      digits[i] = 0;
      overflow = 1;
    }

  }

    // Magnitude Increase:
    if (overflow) {
      digits.insert(digits.begin(), 1);
    }

  return digits;
}