#include "io.h"

int main()
{
    writeAnswer(readNumber("Enter an integer: ") + readNumber("Enter a second integer: "));

    return 0;
}