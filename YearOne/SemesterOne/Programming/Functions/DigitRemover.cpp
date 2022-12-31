#include <iostream>

std::string DeleteDigits(const std::string& str)
{
    std::string result;

    for (char c : str)
    {
        if (!isdigit(c))
        {
            result += c;
        }
    }

    return result;
}

int main()
{
    std::string str = "H1el2lo W3or4ld5";

    std::cout << "After deletion: " << DeleteDigits(str) << std::endl;

    return 0;
}
