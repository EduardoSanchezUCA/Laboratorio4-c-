#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    double monto;
    double descuento = 0.0;

    std::cout << "Ingresa el monto de la compra: $";
    std::cin >> monto;

    if (monto > 200) {
        descuento = 0.20;
    } else if (monto > 100) {
        descuento = 0.10;
    }

    double montoFinal = monto * (1 - descuento);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Descuento aplicado: " << descuento * 100 << "%\n";
    std::cout << "Total a pagar: $" << montoFinal << "\n";

    return 0;
}
