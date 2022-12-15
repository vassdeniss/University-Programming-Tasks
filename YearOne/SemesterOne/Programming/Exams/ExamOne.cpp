#include <iostream>
#include <algorithm>
#include <iomanip>

void ProblemOne();
void ProblemTwo();
void ProblemThree();
void ProblemFour();

int main()
{
    ProblemOne();
    ProblemTwo();
    ProblemThree();
    ProblemFour();

    return 0;
}

void ProblemOne()
{
    int total = 0;
    int max = 0;
    int min = 999;

    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        std::cin >> num;

        if (num < 10 || num > 999)
        {
            std::cout << "Bad input!" << std::endl;
            exit(1);
        }

        total += num;

        if (num > max)
        {
            max = num;
        }

        if (num < min)
        {
            min = num;
        }
    }

    std::cout << max << std::endl;
    std::cout << min << std::endl;
    std::cout << total / 10 << std::endl;
}

void ProblemTwo()
{
    std::cout << "a1 = ";
    int a1 = 0;
    std::cin >> a1;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    std::cout << "a2 = ";
    int a2 = 0;
    std::cin >> a2;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    std::cout << "a3 = ";
    int a3 = 0;
    std::cin >> a3;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input! \n";
        exit(1);
    }

    std::cout << "a4 = ";
    int a4 = 0;
    std::cin >> a4;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    std::cout << "a = ";
    int a = 0;
    std::cin >> a;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    std::cout << "p = ";
    int p = 0;
    std::cin >> p;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    std::cout << "q = ";
    int q = 0;
    std::cin >> q;
    if (!std::cin)
    {
        std::cout << "Error, Bad Input!\n";
        exit(1);
    }

    if (p >= q)
    {
        std::cout << "Error!\n";
        exit(1);
    }

    int equation = 0;

    std::cout << std::endl << std::endl;
    for (int x1 = p; x1 <= q; x1++)
    {
        for (int x2 = p; x2 <= q; x2++)
        {
            for (int x3 = p; x3 <= q; x3++)
            {
                for (int x4 = p; x4 <= q; x4++)
                {
                    equation = a1*x1 + a2*x2 + a3*x3 + a4*x4;

                    std::cout 
                        << a1 << "*" 
                        << x1 << "+" 
                        << a2 << "*" 
                        << x2 << "+" 
                        << a3 << "*" 
                        << x3 << "+" 
                        << a4 << "*" 
                        << x4 << "=" 
                        << equation << std::endl;

                    std::cout << "a = " << a << std::endl;
                    std::cout << std::endl;

                    if (equation == a)
                    {
                        std::cout 
                            << std::setw(5) << x1
                            << std::setw(5) << x2
                            << std::setw(5) << x3
                            << std::setw(5) << x4
                            << "\n";
                    }
                }
            }
        }
    }
}

void ProblemThree()
{
    const int rows = 4;
    const int cols = 5;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int num = 0;
            std::cin >> num;

            arr[i][j] = num;
        }
    }

    int k = 0;
    std::cin >> k;

    if (k > rows || k > cols || k < 0)
    {
        std::cout << "K not in range" << std::endl;
        exit(1);
    }

    int** result = new int*[rows - 1];
    for (int i = 0; i < rows; i++)
    {
        result[i] = new int[cols - 1];
    }

    int resultRow = 0, resultCol = 0;
    for (int i = 0; i < rows; i++)
    {
        if (i == k)
        {
            continue;
        }

        for (int j = 0; j < cols; j++)
        {
            if (j == k)
            {
                continue;
            }

            result[resultRow][resultCol++] = arr[i][j];
        }

        if (i != k)
        {
            resultRow++;
        }
    }

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < cols - 1 ; j++)
        {
            std::cout << "[" << i << "][" << j <<"]: " << result[i][j] << " ";
        }
        
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < rows; i++)
    {
        if (result[i])
        {
            delete[] result[i];
            result[i] = nullptr;
        }
    }

    if (result)
    {
        delete[] result;
        result = nullptr;
    }
}

void ProblemFour()
{
    int size = 0;
    std::cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        int num = 0;
        std::cin >> num;

        for (int j = 0; j < size; j++)
        {
            if (arr[j] == num)
            {
                std::cout << "Repeating number" << std::endl;
                exit(1);
            }
        }
        

        arr[i] = num;
    }

    std::sort(arr, arr + size);

    int difference = arr[1] - arr[0];

    if (size == 1)
    {
        difference = 0;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] - arr[i - 1] != difference)
        {
            difference = 0;
            break;
        }
    }

    std::cout << difference << std::endl;

    delete arr;
    arr = nullptr;
}
