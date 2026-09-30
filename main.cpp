/*
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "IDE works!" << std::endl;

    // Проверка ввода
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    // Проверка вычислений и цикла
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    std::cout << "Sum 1..10 = " << sum << std::endl;   // должно быть 55

    // Проверка стандартной библиотеки
    std::vector<int> v = {5, 3, 8};
    std::cout << "Vector size = " << v.size() << std::endl; // должно быть 3

    return 0;
}
*/
// firstPrc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <windows.h>
//#include <locale>

enum Problems {
    first = 1,
    second,
    third
};


int main()
{
    //SetConsoleOutputCP(CP_UTF8);
    //std::setlocale(LC_ALL, "");

    int number;
    std::wcin >> number;

    /*
    if (number == 1)
        std::cout << "один";
    else if (number == 2)
        std::cout << "два";
    else
        std::cout << "неизвестно";
        */

    switch (number) {
        case Problems::first:
            std::cout << "first";
            break;
        case Problems::second:
            std::cout << "second";
            break;
        default:
            std::cout << "unknown";
    }
}