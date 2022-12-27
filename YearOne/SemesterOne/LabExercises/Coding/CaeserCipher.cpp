#include <iostream>

std::string Encrypt(std::string text, int shift);

int main()
{
    std::string text = "ATTACKATONCE";

    int shift = 4;
    std::cout << "Text: " << text << std::endl;
    std::cout << "Shift: " << shift << std::endl;
    std::cout << "Cipher: " << Encrypt(text, shift) << std::endl;

    return 0;
}

std::string Encrypt(std::string text, int shift)
{
    std::string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
        {
            result += char(int(text[i] + shift - 65) % 26 + 65);
        }
        else 
        {
            result += char(int(text[i] + shift - 97) % 26 + 97);
        }
    }

    return result;
}
