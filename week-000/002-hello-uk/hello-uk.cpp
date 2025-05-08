#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, ".UTF8");
    std::cout << u8"Привіт, Україно!!!" << std::endl;
    return 0;
}