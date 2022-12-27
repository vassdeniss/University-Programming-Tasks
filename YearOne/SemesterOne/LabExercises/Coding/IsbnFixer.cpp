#include <iostream>

int main()
{
    char isbn[14], *isbn_ptr;
    int* isbn_numbers = new int[10];
    std::cout << "ISBN code: ";
    std::cin >> isbn;

    isbn_ptr = isbn;
    int i = 0, k = 10;
    int index = -1;
    while (*isbn_ptr != '\0') 
    {
        if (*isbn_ptr >= 48 && *isbn_ptr <= 57) 
        {
            isbn_numbers[i++] = (int)(*isbn_ptr) - 48;
        }
        else 
        {
            if (*isbn_ptr != '-') 
            {
                index = k;
                isbn_numbers[i++] = -1;
            }
        }

        isbn_ptr++;
        if (*isbn_ptr != '-')
        {
            k--;
        }
    }

    if (index != -1) 
    {
        std::cout << "There is a missing number in the ISBN" << std::endl;
        int sum = 0;
        for (int i = 0; i < 10; i++) 
        {
            if (isbn_numbers[i] != -1) 
            {
                sum += (10 - i) * isbn_numbers[i];
            }
        }

        std::cout << "Missing possition is " << index << std::endl;

        int missingDigit = 0;
        while ((index * missingDigit + sum) % 11 != 0) 
        {
            missingDigit++;
        }

        std::cout << "The missing number is " << missingDigit << std::endl;
    }

    return 0;
}
