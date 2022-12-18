#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> sequence;

    std::cout << "Enter a sequence of whole numbers (separated by spaces): ";
    std::string input;
    while (std::cin >> input)
    {
        if (input == "end")
        {
            break;
        }

        sequence.push_back(input);
    }

    int sum = 0;
    for (const std::string& s : sequence)
    {
        sum += stoi(s);
    }

    double average = static_cast<double>(sum) / sequence.size();
    std::cout << "The average of the elements in the sequence is: " << average << std::endl;

    return 0;
}
