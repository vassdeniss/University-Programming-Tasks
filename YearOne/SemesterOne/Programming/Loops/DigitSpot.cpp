#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    std::string input;
    std::cin >> input;

    int numbers[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < input.length(); i++)
    {
        char digit = input.at(i);
        switch (digit)
        {
            case '0': numbers[0]++; break;
            case '1': numbers[1]++; break;
            case '2': numbers[2]++; break;
            case '3': numbers[3]++; break;
            case '4': numbers[4]++; break;
            case '5': numbers[5]++; break;
            case '6': numbers[6]++; break;
            case '7': numbers[7]++; break;
            case '8': numbers[8]++; break;
            case '9': numbers[9]++; break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << '/' << numbers[i] << ' ';
    }

    return 0;
}
