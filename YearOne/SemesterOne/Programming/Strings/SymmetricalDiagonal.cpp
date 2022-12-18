#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Enter size N: ";
    int size = 0;
    std::cin >> size;

    if (size > 9)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::vector<std::vector<std::string>> matrix;

    for (int i = 0; i < size; i++)
    {
        matrix.push_back(std::vector<std::string>());
        for (int j = 0; j < size; j++)
        {
            matrix[i].push_back("*");
        }
    }

    bool symmetrical = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j && matrix[i][j] != matrix[j][i])
            {
                symmetrical = false;
                break;
            }
        }
    }

    std::string result = symmetrical
        ? "The matrix is symmetrical about its main diagonal"
        : "The matrix is not symmetrical about its main diagonal";
    
    std::cout << result << std::endl;

    return 0;
}
