/*
Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/

#include "io.hpp"

int main(void)  {
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
    return 0;
}