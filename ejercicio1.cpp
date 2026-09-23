#include <iostream>
#include <limits>

using namespace std;

int main() {
    int edad;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Es mayor de edad.\n";
    } else {
        std::cout << "Es menor de edad.\n";
    }

    return 0;
}
