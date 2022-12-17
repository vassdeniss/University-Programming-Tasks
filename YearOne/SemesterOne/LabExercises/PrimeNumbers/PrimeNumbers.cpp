#include <iostream>

int main()
{
    std::cout << "Enter number: ";
    int number = 0;
    std::cin >> number;

    bool isPrime = true;
    if (number == 0 || number == 1)
    {
        isPrime = false;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    std::string result = isPrime 
        ? "The number is prime" 
        : "The number is not prime";

    std::cout << result << std::endl;

    return 0;
}
