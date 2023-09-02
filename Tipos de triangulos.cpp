#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número entero positivo
    do {
        cout << "Ingrese un número entero positivo: ";
        cin >> numero;
    } while (numero <= 0);

    // Mostrar las opciones de triángulos
    cout << "Seleccione el tipo de triángulo rectángulo a visualizar:" << endl;
    cout << "1. Triángulo rectángulo con catetos en la izquierda y base abajo." << endl;
    cout << "2. Triángulo rectángulo con catetos en la izquierda y base arriba." << endl;
    cout << "3. Triángulo rectángulo con catetos en la derecha y base abajo." << endl;
    cout << "4. Triángulo rectángulo con catetos en la derecha y base arriba." << endl;

    int opcion;
    cin >> opcion;

    // Mostrar el triángulo seleccionado
    switch (opcion) {
        case 1:
            // Triángulo rectángulo con catetos en la izquierda y base abajo
            for (int i = 1; i <= numero; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 2:
            // Triángulo rectángulo con catetos en la izquierda y base arriba
            for (int i = numero; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 3:
            // Triángulo rectángulo con catetos en la derecha y base abajo
            for (int i = 1; i <= numero; i++) {
                for (int j = 1; j <= numero - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 4:
            // Triángulo rectángulo con catetos en la derecha y base arriba
            for (int i = numero; i >= 1; i--) {
                for (int j = 1; j <= numero - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
