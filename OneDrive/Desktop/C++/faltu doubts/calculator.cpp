#include <iostream>

class Calculator
{
public:
    // int add(int a, int b) {
    //     return a + b;
    // }

    int add(double a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calculator;

    int result1 = calculator.add(5, 3.9);
    double result2 = calculator.add(3.5, 2.7);
    int result3 = calculator.add(2, 4, 6);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}
