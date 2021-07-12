/*
** EPITECH PROJECT, 2021
** CppPool Day06 ex01
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

void convert_to_fahrenheit(double cel)
{
    double far = 0;

    far = cel * 9.0 / 5.0 + 32;;
    std::cout << std::setw(16) << std::setprecision(3) << std::fixed;
    std::cout << far;
    std::cout << std::setw(16) << "Fahrenheit" << std::endl;
}

void convert_to_celsius(double far)
{
    double cel = 0;

    cel = 5.0 / 9.0 * (far - 32);
    std::cout << std::setw(16) << std::setprecision(3) << std::fixed;
    std::cout << cel;
    std::cout << std::setw(16) << "Celsius" << std::endl;
}

int main(void)
{
    double value = 0;
    std::string unit;
    std::string cel = "Celsius";
    std::string far = "Fahrenheit";

    std::cin >> value >> unit;
    if (unit.compare(cel) == 0)
        convert_to_fahrenheit(value);
    if (unit.compare(far) == 0)
        convert_to_celsius(value);
    return (0);
}
