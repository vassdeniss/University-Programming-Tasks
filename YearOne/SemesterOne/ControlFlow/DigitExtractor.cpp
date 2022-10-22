#include <iostream>
#include <stack>

int main()
{
    std::cout << "Enter a number: ";
    int number = 0;
    std::cin >> number;

    std::stack<int> stack;
    while (number > 0)
    {
        int digit = number % 10;
        number /= 10;
        stack.push(digit);
    }

    while (!stack.empty())
    {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }

    return 0;
}
