#include <iostream>
#include <cstring>

int main()
{
    const int number = 30;

    bool primes[number + 1];
    memset(primes, true, sizeof(primes));

    for (int i = 2; i * i <= number; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= number; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for (int i = 2; i <= number; i++)
    {
        if (primes[i])
        {
            std::cout << i << " "; 
        }
    }

    return 0;
}
