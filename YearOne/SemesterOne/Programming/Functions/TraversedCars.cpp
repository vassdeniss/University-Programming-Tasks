#include <iostream>

std::string GetCars(const std::string& composition, int n, int m)
{
    std::string cars;

    int current = 0;
    for (char c : composition) 
    {
        if (c == 'L' || c == 'B' || c == 'R')
        {
            continue;
        }

        current++;
        if (current >= n && current <= m)
        {
            cars += c;
        }
    }

    return cars;
}

int main()
{
    std::string composition = "LBOPKRKSKPMRKKPP";

    std::cout << "Cars: " << GetCars(composition, 2, 7) << std::endl;

    return 0;
}
