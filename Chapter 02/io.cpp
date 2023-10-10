#include <iostream>

int readNumber(const char *text)
{
    int input{};
    std::cout << text;
    std::cin >> input;

    return input;
}

void writeAnswer(int input)
{
    std::cout << "The answer is: " << input << std::endl;
}