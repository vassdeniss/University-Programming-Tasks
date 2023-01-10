#include <iostream>
#include <cmath>

typedef double (*power)(double, int);
typedef long (*factorial)(int);

double ComputePower(double x, int n)
{
    return pow(x, n);
}

void PrintPower(power func, double x, int n)
{
    std::cout << func(x, n) << std::endl;
}

long ComputeFactorial(int n)
{
    long factorial {1};

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

void PrintFactorial(factorial func, int n)
{
    std::cout << func(n) << std::endl;
}

int main()
{
    double x {0.0};
    std::cin >> x;

    int n {0};
    std::cin >> n;

    PrintPower(ComputePower, x, n);
    PrintFactorial(ComputeFactorial, n);

    return 0;
}
