#include <iostream>

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int int1 = 10, int2 = 20;
    double double1 = 5.5, double2 = 2.2;
    std::string str1 = "Swagat", str2 = "am!";

    std::cout << "Sum of integers: " << add(int1, int2) << std::endl;

    std::cout << "Sum of doubles: " << add(double1, double2) << std::endl;

    return 0;
}
