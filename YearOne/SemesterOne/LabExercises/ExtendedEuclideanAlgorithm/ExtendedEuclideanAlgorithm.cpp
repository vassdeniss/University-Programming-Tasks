#include <iostream>

int GcdExtended(int a, int b, int& x, int& y);

int main()
{
    int x = 0, y = 0, a = 35, b = 15;
    int g = GcdExtended(a, b, x, y);
    
    std::cout << "GCD(" << a << ", " << b << ") = " << g << std::endl;
    
    return 0;
}

int GcdExtended(int a, int b, int& x, int& y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }

    int x1 = 0, y1 = 0;
    int gcd = GcdExtended(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}
