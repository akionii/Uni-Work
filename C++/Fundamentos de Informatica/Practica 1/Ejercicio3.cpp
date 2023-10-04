#include <iostream>
#include <string>

int main() {
    std::cout << "Tamano en bits de los tipos de datos:" << std::endl;
    std::cout << "Tamano de char: " << sizeof(char) * 8 << " bits" << std::endl;
    std::cout << "Tamano de std::string: " << sizeof(std::string) * 8 << " bits" << std::endl;
    std::cout << "Tamano de int: " << sizeof(int) * 8 << " bits" << std::endl;
    std::cout << "Tamano de short: " << sizeof(short) * 8 << " bits" << std::endl;
    std::cout << "Tamano de float: " << sizeof(float) * 8 << " bits" << std::endl;
    std::cout << "Tamano de double: " << sizeof(double) * 8 << " bits" << std::endl;
    std::cout << "Tamano de long double: " << sizeof(long double) * 8 << " bits" << std::endl;

    return 0;
}
