/*
Quiz time

Complete the following program:

#include <iostream>

// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
Sample output:

Mary has a few apples.
How many apples do you have? 1
You have a single apple.
getQuantityPhrase() should take a single int parameter representing
the quantity of something and return the following descriptor:

< 0 = “negative”
0 = “no”
1 = “a single”
2 = “a couple of”
3 = “a few”
> 3 = “many”
getApplesPluralized() should take a single int parameter
parameter representing the quantity of apples and return the following:


Ezoic
1 = “apple”
otherwise = “apples”
This function should use the conditional operator.

Hint: It’s okay to return a C-style string literal from a function as a std::string_view.
*/

/*
#include <iostream>

std::string_view    getQuantityPhrase(int num) {
    if (num < 0)
        return "negative";
    if (num == 0)
        return "no";
    if (num == 1)
        return "a single";
    if (num == 2)
        return "a couple of";
    if (num == 3)
        return "a few";
    return "many";
}

std::string_view    getApplesPluralized(int num)   {
    return (num == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout
        << "Mary has " << getQuantityPhrase(maryApples)
        << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout
        << "You have " << getQuantityPhrase(numApples)
        << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
*/

/*
What is std::string_view?

std::string_view is a modern C++17 feature that provides a lightweight,
non-owning reference to a string.
It's essentially a "view" into an existing string without copying the data.

Why can't I use void for those functions?

You can't use void because your functions need to return values:
std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
<< getApplesPluralized(maryApples) << ".\n";

What is constexpr?
constexpr is a C++11 feature that allows the compiler to evaluate expressions
at compile time rather than runtime. This improves performance since calculations
happen when compiling, not when executing.
*/

/*C++98 Version*/

#include <iostream>
#include <string>

const char* getQuantityPhrase(int num) {
    if (num < 0)
        return "negative";
    if (num == 0)
        return "no";
    if (num == 1)
        return "a single";
    if (num == 2)
        return "a couple of";
    if (num == 3)
        return "a few";
    return "many";
}

const char* getApplesPluralized(int num) {
    return (num == 1) ? "apple" : "apples";
}

int main() {
    const int maryApples = 3;
        std::cout
        << "Mary has " << getQuantityPhrase(maryApples)
        << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples;
    std::cin >> numApples;

    std::cout
        << "You have " << getQuantityPhrase(numApples)
        << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}