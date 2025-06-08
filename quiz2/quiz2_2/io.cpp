#include <iostream>

int readNumber()    {
    std::cout << "Enter Number: ";
    int x;
    std::cin >> x;
    return x;
}

void    writeAnswer(int x)  {
    std::cout << "Answer is " << x << "\n";
}