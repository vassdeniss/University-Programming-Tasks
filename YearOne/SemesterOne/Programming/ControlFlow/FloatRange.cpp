#include <iostream>

#define MIN 1.0
#define MAX 99.9

int main()
{
    std::cout << "Enter a real number: ";
    double realNumber = 0.0;
    std::cin >> realNumber;
    
    if (realNumber >= MIN && realNumber <= MAX)
    {
        std::cout << "Number is in range!" << std::endl;
    }
    else
    {
        std::cout << "Number is not in range!" << std::endl;
    }

    return 0;
}
