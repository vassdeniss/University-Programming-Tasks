#include <iostream>

int RomanToNumber(char character);

int main(){
    std::cout << "Enter a number: ";
    std::string num = " ";
    std::cin >> num;

    std::cout << "Decimal: ";
    
    int result = 0;

    for (int i = 0; i < num.length(); i++)
    {
        int charAsNum = RomanToNumber(num[i]);

        if (i + 1 < num.length())
        {
            int nextCharAsNum = RomanToNumber(num[i + 1]);
            if (charAsNum >= nextCharAsNum)
            {
                result += charAsNum;
            }
            else
            {
                result = result + nextCharAsNum - charAsNum;
                i++;
            }
        }
    }

    std::cout << result;

    return 0;
}

int RomanToNumber(char character) 
{
    switch (character)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}
