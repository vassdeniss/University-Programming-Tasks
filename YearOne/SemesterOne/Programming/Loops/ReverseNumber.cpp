#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int nornalNumber = 0;
    std::cin >> nornalNumber;

    std::cout << "Reversed number is: ";
    while (nornalNumber > 0)
    {
        std::cout << nornalNumber % 10;
        nornalNumber /= 10;
    }

    return 0;
}
