#include <iostream>

int main() 
{
    int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Roman: ";
    while (num != 0) 
    {
        if (num >= 1000) 
        {
            std::cout << "M";
            num -= 1000;
        }
        else if (num >= 900)
        {
            std::cout << "CM";
            num -= 900;
        }        
        else if (num >= 500)
        {           
            std::cout << "D";
            num -= 500;
        }
        else if (num >= 400)
        {
            std::cout << "CD";
            num -= 400;
        }
        else if (num >= 100)
        {
            std::cout << "C";
            num -= 100;                       
        }
        else if (num >= 90)
        {
            std::cout << "XC";
            num -= 90;                                              
        }
        else if (num >= 50)
        {
            std::cout << "L";
            num -= 50;                                                                     
        }
        else if (num >= 40)
        {
            std::cout << "XL";           
            num -= 40;
        }
        else if (num >= 10)
        {
            std::cout << "X";
            num -= 10;           
        }
        else if (num >= 9)
        {
            std::cout << "IX";
            num -= 9;                         
        }
        else if (num >= 5)
        {
            std::cout << "v";
            num -= 5;                                     
        }
        else if (num >= 4)
        {
            std::cout << "IV";
            num -= 4;                                                            
        }
        else if (num >= 1)
        {
            std::cout << "I";
            num -= 1;                                                                                   
        }
    }

    return 0;
}
