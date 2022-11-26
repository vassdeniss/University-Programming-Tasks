#include <iostream>

int main()
{
    std::cout << "Enter number: ";
    int n = 0;
    std::cin >> n;

    int rows = n + 1;
    int cols = (n * 2) - 1;

    for (int i = 0, step = 0; i < rows; i++, step = i)
    {
        bool passedMiddle = false;
        for (int j = 0; j < cols; j++)
        {
            if (j >= (cols / 2) && !passedMiddle)
            {
                passedMiddle = true;
                step = i;
            }

            if (step != 0 && !passedMiddle)
            {
                std::cout << step - step + j + 1 << ' ';
                step--;
            }
            else if (step != 0 && passedMiddle && j == cols - step)
            {
                std::cout << step << ' ';
                step--;
            }
            else
            {
                std::cout << 0 << ' ';
            }
        }

        std::cout << '\n';
    }

    return 0;
}
