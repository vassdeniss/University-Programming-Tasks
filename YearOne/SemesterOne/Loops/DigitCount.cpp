#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a number: ";
    int num = 0;
    std::cin >> num;

    std::string numString = std::to_string(num);
    std::cout << "Length of number: " << numString.length() << std::endl;

    return 0;
}
