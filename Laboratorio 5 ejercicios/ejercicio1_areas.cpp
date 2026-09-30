#include <iostream>
using namespace std;

int main() {
    int opcion;
    double radio, lado, base, altura, area;

    cout << "Calculo de areas\n";
    cout << "1. Circulo\n";
    cout << "2. Cuadrado\n";
    cout << "3. Triangulo\n";
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el radio: ";
            cin >> radio;
            area = 3.1416 * radio * radio;
            cout << "Area del circulo: " << area << endl;
            break;
        case 2:
            cout << "Ingrese el lado: ";
            cin >> lado;
            area = lado * lado;
            cout << "Area del cuadrado: " << area << endl;
            break;
        case 3:
            cout << "Ingrese la base: ";
            cin >> base;
            cout << "Ingrese la altura: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "Area del triangulo: " << area << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}
