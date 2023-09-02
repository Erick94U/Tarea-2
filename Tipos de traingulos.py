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
