#include <iostream>
using namespace std;

int main() {
    int edad;

    // Paso 1: Solicitar la edad al usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Paso 2: Determinar si es mayor o menor de edad
    if (edad >= 18) {
        // Paso 3: Mostrar mensaje si es mayor de edad
        cout << "Usted es mayor de edad." << endl;
    } else {
        // Paso 3: Mostrar mensaje si es menor de edad
        cout << "Usted es menor de edad." << endl;
    }

    return 0;
}
