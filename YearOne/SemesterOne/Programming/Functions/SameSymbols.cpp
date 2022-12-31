#include <iostream>
#include <string>

int FindDifferentChars(const std::string& str1, const std::string& str2)
{
    int count = 0;

    for (int i = 0; i < std::min(str1.length(), str2.length()); i++)
    {
        if (str1[i] == str2[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string str1, str2;

    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    int count = FindDifferentChars(str1, str2);
    std::cout << "Number of matching characters: " << count << std::endl;

    return 0;
}
