#include <iostream>

int main()
{
    std::cout << "Enter word: ";
    std::string input = "";
    std::cin >> input;

    if (input.length() > 19)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    bool isPalindrome = true;
    for (int i = 0; i < input.length() / 2; i++)
    {
        if (input[i] != input[input.length() - i - 1])
        {
            isPalindrome = false;
        }
    }

    std::string result = isPalindrome 
        ? "It is a palindrome!"
        : "It is not a palindrome!";
    std::cout << result << std::endl;

    return 0;
}
