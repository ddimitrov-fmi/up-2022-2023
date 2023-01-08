#include <iostream>
#include <cstring>

bool isPalindrome(const char* str);

bool isPalindromeHelper(const char* str, std::size_t start, std::size_t end);

int main ()
{
    std::cout << std::boolalpha << isPalindrome("alabala") << std::endl;
    std::cout << std::boolalpha << isPalindrome("alaala") << std::endl;
    std::cout << std::boolalpha << isPalindrome("123") << std::endl;

    return 0;
}

bool isPalindrome(const char* str)
{
    return isPalindromeHelper(str, 0, strlen(str) - 1);
}

bool isPalindromeHelper(const char* str, std::size_t start, std::size_t end)
{
    if (start >= end)
    {
        return true;
    }

    return str[start] == str[end] && isPalindromeHelper(str, start + 1, end - 1);
}