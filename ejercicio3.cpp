#include <iostream>
#include <limits>

int main() {
    double numero;

    std::cout << "Ingresa un numero: ";
    std::cin >> numero;

    if (numero < 1) {
        std::cout << "El numero esta fuera del rango por debajo de 1.\n";
    } else if (numero > 100) {
        std::cout << "El numero esta fuera del rango por encima de 100.\n";
    } else {
        std::cout << "El numero se encuentra dentro del rango de 1 a 100.\n";
    }
    return 0;
}
