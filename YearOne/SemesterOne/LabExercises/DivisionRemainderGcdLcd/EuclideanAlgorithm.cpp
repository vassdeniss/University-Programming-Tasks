#include <iostream>

int Gcd(int a, int b);

int main()
{
    int a = 0;
    std::cout << "Enter a: ";
    std::cin >> a;

    int b = 0;
    std::cout << "Enter b: "; 
    std::cin >> b;

    std::cout << "GCD(" << a << ", " << b << ") = " << Gcd(a, b) << std::endl;

    return 0;
}

int Gcd(int a, int b) 
{
    if (a == 0)
    {
        return b;
    }

    return Gcd(b % a, a);
}
