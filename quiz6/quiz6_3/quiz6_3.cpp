/*
Write a function int accumulate(int x).
This function should return the sum of all of the values of x
that have been passed to this function.


Hint: Use a static local variable to store the sum.
The following program should run and produce the output noted in comments:

#include <iostream>

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}
*/

#include <iostream>

int accumulate(int x)   {
    static int  result = 0;
    result += x;
    return result;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}