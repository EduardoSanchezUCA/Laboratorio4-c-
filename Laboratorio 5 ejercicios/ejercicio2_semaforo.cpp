#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char color;

    cout << "Ingrese un color (R, A, V): ";
    cin >> color;
    color = static_cast<char>(toupper(static_cast<unsigned char>(color)));

    switch (color) {
        case 'R':
            cout << "Alto" << endl;
            break;
        case 'A':
            cout << "Precaucion" << endl;
            break;
        case 'V':
            cout << "Avance" << endl;
            break;
        default:
            cout << "Color no reconocido" << endl;
    }

    return 0;
}
