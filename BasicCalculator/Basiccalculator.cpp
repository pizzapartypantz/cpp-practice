#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter the first number: ";
    int x{};
    std::cin >> x;
    return x;
}

int getSecondValueFromUser()
{
    std::cout << "Enter the second number: ";
    int y{};
    std::cin >> y;

    return y;
}

int addNumbers(int x, int y)
{
    return x + y;
}

int subtractNumbers(int x, int y)
{
    return x - y;
}

int multiplyNumbers(int x, int y)
{
    return x * y;
}

int divideNumbers(int x, int y)
{
    return x / y;
}

int main()
{
   int x {getValueFromUser()};
   int y {getSecondValueFromUser()};

    std::cout << "Addition of these two: " << addNumbers(x, y) << '\n';
    std::cout << "Subtraction of these two: " << subtractNumbers(x, y) << '\n';
    std::cout << "Multiplication of these two: " << multiplyNumbers(x, y) << '\n';
    std::cout << "Division of these two: " << divideNumbers(x, y) << '\n';

    return 0;
}