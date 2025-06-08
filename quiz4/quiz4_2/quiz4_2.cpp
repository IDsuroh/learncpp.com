/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
The program computes the answer on the two numbers the user entered and prints the results.
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31

Hint: Write three functions: one to get a double value, one to get the arithmetic symbol,
and one to calculate and print the answer.

Hint: Use if-statements and operator== to compare the user input to the desired arithmetic symbol.

Hint: Consider using an early return (covered in lesson 4.10 -- Introduction to if statements)
if the user doesn’t pass in a supported operation.

*/

#include <iostream>
#include <string>

double  getDouble(void) {
    double  d;
    std::cout << "Enter a double value: ";
    std::cin >> d;
    return d;
}

char    getSymbol(void) {
    char    s;
    std::cout << "Enter +. -. *, or /: ";
    std::cin >> s;
    return s;
}

double  calculator(double x, double y, char z) {
    if (z == '+')
        return (x + y);
    else if (z == '-')
        return (x - y);
    else if (z == '*')
        return (x * y);
    else if (z == '/')
        return (x / y);
    else    {
        std::cerr << "Enter symbol!!!\n";
        return 0;
    }
}

void    output(double x, double y, char z, double answer)    {
    std::cout << x << " " << z << " " << y << " is " << answer << "\n";
}

int main(void)  {
    double  x = getDouble();
    double  y = getDouble();
    char    z = getSymbol();
    double  answer = calculator(x, y, z);
    output(x, y, z, answer);
    return 0;
}