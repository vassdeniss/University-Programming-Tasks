#include <iostream>

int main() 
{
    std::cout << "Enter an int, float, double, bool, char values: " << std::endl;
    int intNum;
    float floatNum;
    double doubleNum;
    bool boolValue;
    char charValue;
    std::cin >> intNum >> floatNum >> doubleNum >> boolValue >> charValue;

    std::string boolAsString = 
        boolValue == true 
            ? "true" 
            : "false";

    std::cout << "Int: " << intNum << std::endl
        << "Float: " << floatNum << std::endl
        << "Double: " << doubleNum << std::endl
        << "Bool: " << boolAsString << std::endl
        << "Char: " << charValue << std::endl;

    return 0;
}
