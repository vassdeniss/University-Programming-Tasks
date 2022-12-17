#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

#define N 40
#define M 2

int GetMaxPower();
void PrimeFactors(int n, int freq[]);

int main()
{
    std::cout << GetMaxPower();
    return 0;
}

int GetMaxPower()
{
    int freq1[N + 1], freq2[M + 1];

    std::memset(freq1, 0, sizeof(freq1));
    std::memset(freq2, 0, sizeof(freq2));

    PrimeFactors(N, freq1);
    PrimeFactors(M, freq2);

    int max = 0;
    for (int i = 2; i <= M; i++) 
    {
        if (freq1[i] == 0 && freq2[i] == 0)
        {
            continue;
        }

        if (freq2[i] > freq1[i])
        {
            return 0;
        }

        if (freq2[i]) 
        {
            max = std::max(max, freq1[i] / freq2[i]);
        }
    }

    return max;
} 

void PrimeFactors(int n, int freq[])
{
    int count = 0;

    while (n % 2 == 0) 
    {
        count++;
        n /= 2;
    }

    freq[2] = count;
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    {
        count = 0;
        while (n % i == 0) 
        {
            count++;
            n /= i;
        }

        freq[i] = count;
    }

    if (n > 2)
    {
        freq[n] = 1;
    }
}
