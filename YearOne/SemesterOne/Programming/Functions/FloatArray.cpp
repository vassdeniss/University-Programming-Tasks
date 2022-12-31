#include <iostream>
#include <random>

void FillArray(float** array, int rows, int cols)
{
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_real_distribution<float> distribution(3.33f, 333.33f);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = distribution(generator);
        }
    }
}

void FindElement(float** array, int rows, int cols)
{
    float maxProduct = 0.0f;

    for (int i = 0; i < rows; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        float product = 1.0f;
        for (int j = 0; j < cols; j++)
        {
            product *= array[i][j];
        }

        if (product > maxProduct)
        {
            maxProduct = product;
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] == maxProduct)
            {
                std::cout << "Element found at (" << i << "," << j << ")" << std::endl;
            }
        }
        
    }
}

float** MatrixDifference(float** array, float** array2, int rows, int cols)
{
    float** result = new float*[rows];

    for (int i = 0; i < rows; i++)
    {
        result[i] = new float[cols];
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = array[i][j] - array2[i][j];
        }
    }

    return result;
}

float** ReplaceElementsBelowSecondaryDiagonal(float** array, int rows, int cols)
{
    float** result = new float*[rows];

    for (int i = 0; i < rows; i++)
    {
        result[i] = new float[cols];
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = i > j ? 0 : array[i][j];
        }
    }

    return result;
}

float** PopulateIdentityMatrix(int rows, int cols)
{
    float** result = new float*[rows];

    for (int i = 0; i < rows; i++)
    {
        result[i] = new float[cols];
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = i == j ? 1 : 0;
        }
    }

    return result;
}

float** MultiplyMatrices(float** array, float** array2, int rows, int cols, int rows2, int cols2)
{
    if (cols != rows2)
    {
        throw std::invalid_argument("Invalid matrix dimensions for multiplication");
    }

    float** result = new float*[rows];
    for (int i = 0; i < rows; i++)
    {
        result[i] = new float[cols2];
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                result[i][j] += array[i][k] * array2[k][j];
            }
        }
    }

    return result;
}

int main()
{
    // Functions defined above
    return 0;
}
