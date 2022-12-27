#include <iostream>

bool IsValidIsbn(std::string& isbn);

int main()
{
    std::string isbn = "007462542X";
    IsValidIsbn(isbn) 
        ? std::cout << "Valid"
        : std::cout << "Invalid";

    return 0;
}

bool IsValidIsbn(std::string& isbn)
{
    int length = isbn.length();
    if (length != 10)
    {
        return false;
    }

    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int digit = isbn[i] - '0';
        if (digit < 0 || digit > 9)
        {
            return false;
        }

        sum += digit * (10 - i);
    }
    
    char last = isbn[9];
    if (last != 'X' && (last < '0' || last > '9'))
    {
        return false;
    }

    sum += (last == 'X') 
        ? 10 
        : last - '0';

    return sum % 11 == 0;
}
