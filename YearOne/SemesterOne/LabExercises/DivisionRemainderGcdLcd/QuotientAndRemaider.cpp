#include <iostream>

int main()
{
    int a = 0;
    std::cout << "Enter a: ";
    std::cin >> a;

    int b = 0;
    std::cout << "Enter b: ";
    std::cin >> b;

    int quotent = a / b;
    int remainder = a % b;

    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "quotent is: " << quotent << std::endl;
    std::cout << "remainder is: " << remainder << std::endl;

    std::cout << a << " equals " 
        << b << " times the quotent: " 
        << quotent << " plus the remainder: " 
        << remainder << std::endl;

    std::cout << a << " = " << b << " * " << quotent << " + " << remainder << std::endl;

    return 0;
}
