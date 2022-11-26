#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int number = 0;
    std::cin >> number;

    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}
