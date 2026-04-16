#include <iostream>  // для ввода/вывода
#include <string>    // для строк

// главная функция программы
int main() {
    std::string name;  // имя пользователя
    std::cout << "Enter your name: ";  // запрос имени
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
