#include <iostream>
#include <ctime>
#include <vector>

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

    std::vector<int> answer; // C# equal to List<T>

    int dr[] = { 0, 1, 0, -1 };
    int dc[] = { 1, 0, -1, 0 };

    // Or List<List<bool>>
    // Constructor: (size_type n, value_type val)
    std::vector<std::vector<bool>> seen(rows, std::vector<bool>(cols, false));
    
    int x = 0, y = 0, di = 0;

    for (int i = 0; i < rows * cols; i++)
    {
        answer.push_back(matrix[x][y]);

        seen[x][y] = true;
        int newX = x + dr[di];
        int newY = y + dc[di];

        if (0 <= newX 
            && newX < rows 
            && 0 <= newY 
            && newY < cols
            && !seen[newX][newY]) 
        {
            x = newX;
            y = newY;
        }
        else 
        {
            di = (di + 1) % 4;
            x += dr[di];
            y += dc[di];
        }
    }
    
    for (int x : answer) 
    {
        std::cout << x << std::endl;
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
