#include <iostream>

int main()
{
    int digitCount = 13;
    int* isbn13Numbers = new int[digitCount];
    char isbn13[17];
    std::cout << "Enter an ISBN 13 code: ";
    std::cin >> isbn13;

    char* isbn13Pointer = isbn13;
    
    int i = 0;
    while (*isbn13Pointer != '\0') 
    {
        if (*isbn13Pointer != '-') 
        {
            isbn13Numbers[i++] = (int)(*isbn13Pointer) - 48;
        }

        isbn13Pointer++;
    }

    int sum = 0;
    int j = 1;
    for (int i = 0; i < digitCount; i++) 
    {
        j = (i % 2 != 0) 
            ? 3 
            : 1;

        sum += j * isbn13Numbers[i];
    }

    std::cout << "The ISBN 13 number is" << ((sum % 10) ? " not " : " ") << "correct" << std::endl;

    return 0;
}
