/*
Question #1

The following program is supposed to add two numbers, but doesn’t work correctly.

Use the integrated debugger to step through this program and watch the value of x. Based on the information you learn, fix the following program:

#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}
*/


#include <iostream>

int readNumber()
{
    int x;
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);

	return 0;
}