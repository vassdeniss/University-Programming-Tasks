#include <iostream> 

int main() 
{
    int numOne = 0;
    std::cin >> numOne;

    int numTwo = 0;
    std::cin >> numTwo;

    std::cout << "Number One before swap: " << numOne << std::endl
        << "Number Two before swap: " << numTwo << std::endl;

    numOne = numOne ^ numTwo;
    numTwo = numOne ^ numTwo;
    numOne = numOne ^ numTwo; 

    std::cout << "Number One after swap: " << numOne << std::endl
        << "Number Two after swap: " << numTwo << std::endl;

    return 0;
}
