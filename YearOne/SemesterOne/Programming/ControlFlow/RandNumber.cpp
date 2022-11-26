#include <iostream>
#include <ctime>
#include <stack>

int CountDigits(int number);

int main()
{
    std::cout << "Enter min range: ";
    int min = 0;
    std::cin >> min;

    std::cout << "Enter max range: ";
    int max = 0;
    std::cin >> max;

    int range = max - min + 1;

    std::srand(std::time(nullptr));

    int randomNumber = std::rand() % range + min;
    std::cout << "Your random number in range is: " << randomNumber << std::endl; 

    if (CountDigits(randomNumber) <= 3)
    {
        std::stack<int> stack;
        while (randomNumber > 0)
        {
            int digit = randomNumber % 10;
            randomNumber /= 10;
            stack.push(digit);
        }

        while (!stack.empty())
        {
            std::cout << stack.top() << std::endl;
            stack.pop();
        }
    }

    return 0;
}

int CountDigits(int number)
{
    int count = 0;

    while (number != 0) 
    {
        number /= 10;
        count++;
    }

    return count;
}
