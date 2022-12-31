#include <iostream>

void ReplaceString(std::string& input, std::string& toReplace, std::string& replaceWith)
{
    std::size_t index = input.find(toReplace);
    if (index != std::string::npos)
    {
        input.replace(index, toReplace.length(), replaceWith);
    }
}

int main()
{
    std::string input = "Hello World!";
    std::string toReplace = "Hello";
    std::string replaceWith = "Bye";

    ReplaceString(input, toReplace, replaceWith);

    std::cout << "Result: " << input << std::endl;

    return 0;
}
