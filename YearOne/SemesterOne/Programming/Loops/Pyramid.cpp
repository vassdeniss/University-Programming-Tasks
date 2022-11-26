#include <iostream>

int main()
{
    std::cout << "Enter symbol to use: ";
    char symbol = '0';
    std::cin >> symbol;

    std::cout << "Enter number of rows: ";
    int rows = 0;
    std::cin >> rows;

    for (int row = 1, writtenSymbols = 0; row <= rows; row++, writtenSymbols = 0)
    {
        for (int space = 1; space <= rows - row; space++)
        {
            std::cout << "  ";
        }

        while (writtenSymbols != 2 * row - 1)
        {
            std::cout << symbol << ' ';
            writtenSymbols++;
        }
        
        std::cout << '\n';
    }
    
    return 0;
}
