#include <iostream>

int main()
{
    int* result = new int[10];
    
    int decimalNumber = 0; 
    std::cout << "Enter the number to convert: ";    
    std::cin >> decimalNumber;    

    int i = 0;
    for (i = 0; decimalNumber > 0; i++)    
    {    
        result[i] = decimalNumber % 3;    
        decimalNumber = decimalNumber / 3;  
    }
    
    std::cout << "Ternary form: ";    
    for (i = i - 1; i >= 0; i--)    
    {    
        std::cout << result[i];    
    }

    delete[] result;
    result = nullptr;

    return 0;
}
