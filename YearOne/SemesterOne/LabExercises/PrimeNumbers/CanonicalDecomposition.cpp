#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<long long, long long> CanonicalDecomposition(long long n);

int main()
{
    long long n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::unordered_map<long long, long long> decomposition = CanonicalDecomposition(n);

    std::cout << "The canonical decomposition of " << n << " is: " << std::endl;
    
    std::unordered_map<long long, long long>::iterator it;

    for (it = decomposition.begin(); it != decomposition.end(); it++)
    {
        std::cout << (*it).first << "^" << (*it).second << " ";
    }

    return 0;
}

std::unordered_map<long long, long long> CanonicalDecomposition(long long n)
{
    std::unordered_map<long long, long long> decomposition;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            decomposition[i] = 1;
            while (n % i == 0)
            {
                decomposition[i]++;

                n /= i;
            }
        }
    }

    if (n != 1)
    {
        decomposition[n] = 1;
    }

    return decomposition;
}
