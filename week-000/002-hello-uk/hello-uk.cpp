#include <iostream>
#include <clocale>
#include <locale>

int main() {
    std::setlocale(LC_ALL, ".UTF8");
    std::cout.imbue(std::locale(""));
    std::cout << u8"Привіт, Україно!!!" << std::endl;
    return 0;
}