// #include <iostream>
// #include <string>

// int main() {
//     std::string fi;
//     std::string si;
//     std::cout << "Enter an integer: ";
//     std::getline(std::cin, fi);
//     std::cout << "Enter a second integer: ";
//     std::getline(std::cin, si);
//     int first = std::atoi(fi.c_str());
//     int second = std::atoi(si.c_str());
//     std::cout << first << " + " << second << " is " << first + second << ".\n";
//     std::cout << first << " - " << second << " is " << first - second << ".\n";
//     return 0;
// }

//wrong

#include <iostream>

int main()  {
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter an integer: ";
    int y;
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;
}