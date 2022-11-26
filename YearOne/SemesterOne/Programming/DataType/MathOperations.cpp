#include <iostream> 

int main() 
{
    int numOne = 0;
    std::cin >> numOne;

    int numTwo = 0;
    std::cin >> numTwo;

    std::cout << "+: " << numOne + numTwo << std::endl;
    std::cout << "-: " << numOne - numTwo << std::endl;
    std::cout << "*: " << numOne * numTwo << std::endl;
    std::cout << "/: " << numOne / numTwo << std::endl;
    std::cout << "%: " << numOne % numTwo << std::endl;

    return 0;
}
