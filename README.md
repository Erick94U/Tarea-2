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
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "Seleccione el tipo de triangulo rectangulo a visualizar:" << endl;
    // Mostraremos las opciones a elegir
    cout << "1. Triangulo rectangulo con catetos en la izquierda y base abajo." << endl;
    cout << "2. Triangulo rectangulo con catetos en la izquierda y base arriba." << endl;
    cout << "3. Triangulo rectangulo con catetos en la derecha y base abajo." << endl;
    cout << "4. Triangulo rectangulo con catetos en la derecha y base arriba." << endl;

    int opcion;
    cin >> opcion;

    // Mostrar triangulo seleccionado
    switch (opcion) {
        case 1:
            // Opción para triángulo rectángulo, catetos en la izquierda y base abajo
            for (int i = 1; i <= numero; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 2:
            // Opción para triángulo rectángulo con catetos en la izquierda y base arriba
            for (int i = numero; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 3:
            // Opción para triángulo rectángulo con catetos en la derecha y base abajo
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
            // Opción para triángulo rectángulo con catetos en la derecha y base arriba
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
            cout << "Opcion no valida." << endl; //si eo número no es una opción válida muestra mensaje de no válido
    }

    return 0;
}


## Lenguaje Python

#Tipos de triangulos rectangulos
def main():
    numero = int(input("Ingrese un número entero positivo: ")) #solicita un numero al usuario para el tamaño del triangúlo
    
    
    if numero <= 0: #valida si el numero es entero positivo
        print("Por favor, ingrese un número entero positivo.") #si no es entero positivo solicita nuevamente un numero
        return


    print("Seleccione la opción de tipo triángulo rectángulo que necesite:") #mensaje de instrucción
    print("1. Triángulo rectángulo con catetos en la izquierda y base abajo.") #primera opcion
    print("2. Triángulo rectángulo con catetos en la izquierda y base arriba.") #segunda opcion
    print("3. Triángulo rectángulo con catetos en la derecha y base abajo.") #tercera opcion
    print("4. Triángulo rectángulo con catetos en la derecha y base arriba.") #cuarta opcion

    opcion = int(input("Ingrese el número de la opción deseada: "))  #solicita un número al usuario

    if opcion == 1: 
        for i in range(1, numero + 1):
            print("* " * i) #imprime opcion 1, un triángulo rectángulo con catetos en la izquierda y base abajo
    elif opcion == 2:
        for i in range(numero, 0, -1):
            print("* " * i) #imprime opción 2, un triángulo rectángulo con catetos en la izquierda y base arriba
    elif opcion == 3:
        for i in range(1, numero + 1):
            print("  " * (numero - i) + "* " * i) #imprime opción 3, un triángulo rectángulo con catetos en la derecha y base abajo
    elif opcion == 4:
        for i in range(numero, 0, -1):
            print("  " * (numero - i) + "* " * i) #imprime opción 4, un triángulo rectángulo con catetos en la derecha y base arriba
    else:
        print("Opción no válida. Por favor, ingrese una opción válida.")
if __name__ == "__main__":
    main()

## Lenguaje Pseudocodigo

Inicio del programa
    Leer numero
    Si numero <= 0 Entonces
        Mostrar 
    "ingrese un numero entero positivo."
    Si numero >= 1 Entonces
        Mostrar "Seleccione la opción de tipo triángulo rectángulo que necesite:"
        Mostrar "1. Triángulo rectángulo con catetos en la izquierda y base abajo."
        Mostrar "2. Triángulo rectángulo con catetos en la izquierda y base arriba."
        Mostrar "3. Triángulo rectángulo con catetos en la derecha y base abajo."
        Mostrar "4. Triángulo rectángulo con catetos en la derecha y base arriba."

    Leer opcion

    Si opcion == 1 Entonces
        Para i en rango((1, numero + 1) Hacer
            Mostrar 
            
2 Entonces
        Para i en 
        Para
rango(numero, 0, -1) Hacer
            Mostrar "* " repetir i veces
        Fin Para
    Sino, Si opcion == 
   3 Entonces
        Para i en 
        Para i en r

    Si opcion ==
    4 Entonces
        Para i en rango(numero, 0, -1) Hacer
            Mostrar "  " repetir (numero - i) veces + "* " repetir i veces

        Para i
rango(1, numero + 1) Hacer
            Mostrar 
           
"  " repetir (numero - i) veces + "* " repetir i veces
        Fin Para

    Fin Si
    Fin del programa
