#include <iostream> 

int main() 
{
    int numOne = 0;
    std::cin >> numOne;

    int numTwo = 0;
    std::cin >> numTwo;

    numOne += numTwo;
    std::cout << "+=: " << numOne << std::endl;

    numOne -= numTwo;
    std::cout << "-=: " << numOne << std::endl;
    
    numOne *= numTwo;
    std::cout << "*=: " << numOne << std::endl;
    
    numOne /= numTwo;
    std::cout << "/=: " << numOne << std::endl;
    
    numOne %= numTwo;
    std::cout << "%=: " << numOne << std::endl;

    return 0;
}
