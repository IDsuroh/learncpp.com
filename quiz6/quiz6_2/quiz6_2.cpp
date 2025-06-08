/*

Write a file named constants.h that makes the following program run.

main.cpp:

#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "How many students are in your class? ";
	int students;
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}

*/

#include "Constants.h"
#include <iostream>

int main()
{
	std::cout << "How many students are in your class? ";
	int students;
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}