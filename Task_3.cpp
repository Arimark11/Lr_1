#include <iostream>
#include <cmath>

int main() {
    double touble = 0, start = 0, end = 0, step = 0;
    std::cout << "Введите начальное значение x: ";
    std::cin >> start; // Задаем исходное значение переменной
    std::cout << "Введите конечное значение x: ";
    std::cin >> end; // Задаем конечно значение переменной
    std::cout << "Введите шаг: ";
    std::cin >> step; // Задаем шаг, с которым с которым будет изменяться аргумент
    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        std::cout << x << " | " << y << std::endl; // Выводим значения функции для каждого аргумента (x | y)
    }
    return nullptr;
}