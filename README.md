# Tarea-2

##  Triangulo rectangulo

### El usuario debe de ingresar 1 numero entero que será equivalente al tamaño del triangulo a mostrar,
luego deberá de seleccionar 1 de 4 opciones que serán la forma o posición que podrá tener el triangulo.

## Lenguaje C++

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


## Lenguaje Python

def main():
    numero = int(input("Ingrese un número entero positivo: "))
    
    # Validar que el número sea positivo
    if numero <= 0:
        print("Por favor, ingrese un número entero positivo.")
        return

    # Mostrar las opciones de triángulos
    print("Seleccione el tipo de triángulo rectángulo a visualizar:")
    print("1. Triángulo rectángulo con catetos en la izquierda y base abajo.")
    print("2. Triángulo rectángulo con catetos en la izquierda y base arriba.")
    print("3. Triángulo rectángulo con catetos en la derecha y base abajo.")
    print("4. Triángulo rectángulo con catetos en la derecha y base arriba.")

    opcion = int(input("Ingrese el número de la opción deseada: "))

    # Mostrar el triángulo seleccionado
    if opcion == 1:
        # Triángulo rectángulo con catetos en la izquierda y base abajo
        for i in range(1, numero + 1):
            print("* " * i)
    elif opcion == 2:
        # Triángulo rectángulo con catetos en la izquierda y base arriba
        for i in range(numero, 0, -1):
            print("* " * i)
    elif opcion == 3:
        # Triángulo rectángulo con catetos en la derecha y base abajo
        for i in range(1, numero + 1):
            print("  " * (numero - i) + "* " * i)
    elif opcion == 4:
        # Triángulo rectángulo con catetos en la derecha y base arriba
        for i in range(numero, 0, -1):
            print("  " * (numero - i) + "* " * i)
    else:
        print("Opción no válida. Por favor, ingrese una opción válida.")

if __name__ == "__main__":
    main()

