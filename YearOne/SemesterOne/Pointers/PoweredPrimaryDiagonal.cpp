#include <iostream>
#include <ctime>
#include <cmath>

#define RANGE_MAX 122
#define RANGE_MIN -12

int main()
{
    // Get data from user
    int rows, cols = 0;
    std::cout << "Enter rows: ";
    std::cin >> rows;
    std::cout << "Enter cols: ";
    std::cin >> cols;

    // Reserve space for matrix
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    // Generate seed and range
    int range = RANGE_MAX - RANGE_MIN + 1;
    std::srand(std::time(nullptr));

    // Fill array with random numbers
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int randomNumber = std::rand() % range + RANGE_MIN;
            matrix[i][j] = randomNumber;
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;

    // For every number on and below the primary diagonal
    // sum the indices and power it to the current row
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (j > i)
            {
                continue;
            }

            matrix[i][j] = pow(i + j, j);
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << " ";
        }

        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    matrix = nullptr;

    return 0;
}
