#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, ".UTF8");
    std::cout << u8"Дмитро Вялков" << std::endl;
    std::cout << u8"ї є ґ" << std::endl;
    return 0;
}