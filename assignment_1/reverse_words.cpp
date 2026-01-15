#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

// Reverse each word in the string
std::string reverse_words(const std::string &str)
{
    std::string result = str;
    int i = 0;

    while (i < result.length()) {
        if (std::isalnum(result[i])) {
            int start = i;
            while (i < result.length() && std::isalnum(result[i])) {
                i++;
            }
            int end = i - 1;
            while (start < end) {
                std::swap(result[start], result[end]);
                start++;
                end--;
            }
        } else {
            i++;
        }
    }
    return result;
}

int main()
{
    // Original assignment test
    std::string test_str = "String; 2be reversed...";
    assert(reverse_words(test_str) == "gnirtS; eb2 desrever...");
    std::cout << "Assignment 1 Test Passed!" << std::endl;

    // New interactive input
    std::string user_input;
    std::cout << "Enter your string to reverse words: ";
    std::getline(std::cin, user_input);

    std::string reversed = reverse_words(user_input);
    std::cout << "Reversed words: " << reversed << std::endl;

    return 0;
}