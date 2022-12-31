#include <iostream>

void FillArray(int** array, int rows, int cols)
{
    int value = 1;
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                array[i][j] = value++;
            }
        }
        else 
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                array[i][j] = value++;
            }
        }
    }
}

int main()
{
    const int rows = 5;
    const int cols = 5;

    int** array = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    FillArray(array, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
        array[i] = nullptr;
    }

    delete[] array;
    array = nullptr;

    return 0;
}
