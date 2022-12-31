#include <iostream>
#include <climits>

int FindOptimalSplit(int weights[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += weights[i];
    }

    bool** dp = new bool*[size + 1];
    for (int i = 0; i < size + 1; i++)
    {
        dp[i] = new bool[sum + 1];
    }

    for (int i = 0; i <= size; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (weights[i - 1] <= j)
            {
                dp[i][j] |= dp[i - 1][j - weights[i - 1]];
            }
        }
    }

    int difference = INT_MAX;

    for (int i = sum / 2; i >= 0; i--) 
    {
        if (dp[size][i] == true) 
        {
            difference = sum - 2 * i;
            break;
        }
    }

    for (int i = 0; i < size + 1; i++)
    {
        delete[] dp[i];
        dp[i] = nullptr;
    }

    delete[] dp;
    dp = nullptr;

    return difference;
}

int main()
{
    int weights[] = { 3, 1, 4, 2, 2, 1 };
    int size = sizeof(weights) / sizeof(weights[0]);

    std::cout << "Optimal split: " << FindOptimalSplit(weights, size) << std::endl;

    return 0;
}
