/*
Question #4

Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).

Hint: Input the person’s name using std::getline()
*/

#include <iostream>
#include <string>

void    compare(std::string person1, int age1, std::string person2, int age2) {
    if (age1 > age2)    {
        std::cout
            << person1 << " (age " << age1 << ") is older than "
            << person2 << " (age " << age2 << ")\n";
    } else if (age1 < age2)   {
        std::cout
            << person2 << " (age " << age2 << ") is older than "
            << person1 << " (age " << age1 << ")\n";
    } else    {
        std::cout << "They are the same age";
    }
}

int main(void)  {
    std::string person1;
    std::string person2;
    std::cout << "Enter the name of person #1: ";
    std::getline(std::cin >> std::ws, person1);
    std::cout << "Enter the age of " << person1 << ": ";
    int age1;
    std::cin >> age1;
    std::cout << "Enter the name of person #2: ";
    std::getline(std::cin >> std::ws, person2);
    std::cout << "Enter the age of " << person2 << ": ";
    int age2;
    std::cin >> age2;
    compare(person1, age1, person2, age2);
    return 0;
}

//The std::ws discards any whitespaces that follows after std::cin.
//if there is 37 in the cin, its not just 37. Its 37 and an enter since we have to press enter.