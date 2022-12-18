#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> sequence;
    
    std::cout << "Enter a sequence of strings (until 'end' input): ";
    std::string input;
    while (std::cin >> input)
    {
        if (input == "end")
        {
            break;
        }

        sequence.push_back(input);
    }
    
    bool isMonotonical = true;
    for (int i = 1; i < sequence.size(); i++)
    {
        if (sequence[i] > sequence[i - 1])
        {
            std::cout << "The sequence is not monotonically decreasing." << std::endl;
            isMonotonical = false;
        }
    }

    if (!isMonotonical)
    {
        return 0;
    }

    std::cout << "The sequence is monotonically decreasing." << std::endl;
}
