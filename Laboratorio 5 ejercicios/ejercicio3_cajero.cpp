#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 0.0;
    double cantidad;

    do {
        cout << "\nCajero automatico\n";
        cout << "1. Ingresar dinero\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Consultar saldo\n";
        cout << "4. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Cantidad a ingresar: ";
                cin >> cantidad;
                if (cantidad > 0) {
                    saldo += cantidad;
                    cout << "Ingreso realizado. Saldo actual: " << saldo << endl;
                } else {
                    cout << "La cantidad debe ser mayor que cero" << endl;
                }
                break;
            case 2:
                cout << "Cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad <= 0) {
                    cout << "La cantidad debe ser mayor que cero" << endl;
                } else if (cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Retiro realizado. Saldo actual: " << saldo << endl;
                } else {
                    cout << "Saldo insuficiente" << endl;
                }
                break;
            case 3:
                cout << "Saldo actual: " << saldo << endl;
                break;
            case 4:
                cout << "Gracias por usar el cajero" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcion != 4);

    return 0;
}
