#include <algorithm>

#include "palindrome.hpp"

bool isPalindrome(const std::string & text) {
    std::string text_copy(text);

    std::reverse(text_copy.begin(), text_copy.end());

    return (text == text_copy);
}