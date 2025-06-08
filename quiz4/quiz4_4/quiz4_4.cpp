/*
Question #2

Find 3 issues in the following code:

#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  std::uint8_t age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  if (age >= 16)
      std::cout << "Yes";
  else
      std::cout << "No";

  std::cout << '.\n';

  return 0;
}
Sample desired output:

How old are you?
6
Allowed to drive a car in Texas: No
How old are you?
19
Allowed to drive a car in Texas: Yes
*/

//#include <cstdint> // for std::uint8_t but we do not need here
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  //std::uint8_t age{};
  int age;
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  if (age >= 16)
      std::cout << "Yes";
  else
      std::cout << "No";

  //std::cout << '.\n';
  std::cout << ".\n";

  return 0;
}