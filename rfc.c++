#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Empleado {
private:
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int dia, mes, anio;

public:
    // Captura de datos
    void capturarDatos() {
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        cout << "Ingrese el apellido paterno: ";
        getline(cin, apellidoPaterno);
        cout << "Ingrese el apellido materno (si no tiene, presione Enter): ";
        getline(cin, apellidoMaterno);
        cout << "Ingrese el dia de nacimiento (DD): ";
        cin >> dia;
        cout << "Ingrese el mes de nacimiento (MM): ";
        cin >> mes;
        cout << "Ingrese el anio de nacimiento (AAAA): ";
        cin >> anio;
    }

    // Función para obtener la primera vocal interna del apellido paterno
    char obtenerVocalInterna(string apellido) {
        for (size_t i = 1; i < apellido.length(); ++i) {
            char c = toupper(apellido[i]);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                return c;
            }
        }
        return 'X'; // En caso de que no haya vocal interna
    }

    // Generar RFC
    string generarRFC() {
        string rfc = "";

        // Primera letra del apellido paterno
        rfc += toupper(apellidoPaterno[0]);

        // Primera vocal interna del apellido paterno
        rfc += obtenerVocalInterna(apellidoPaterno);

        // Primera letra del apellido materno o X si no hay
        if (!apellidoMaterno.empty())
            rfc += toupper(apellidoMaterno[0]);
        else
            rfc += 'X';

        // Primera letra del nombre (en mayúscula)
        rfc += toupper(nombre[0]);

        // Dos últimos dígitos del año
        rfc += to_string(anio).substr(2, 2);

        // Mes (con dos dígitos)
        if (mes < 10) rfc += "0";
        rfc += to_string(mes);

        // Día (con dos dígitos)
        if (dia < 10) rfc += "0";
        rfc += to_string(dia);

        // Homoclave no incluida
        return rfc;
    }

    // Mostrar RFC
    void mostrarRFC() {
        string rfc = generarRFC();
        cout << "RFC generado (sin homoclave): " << rfc << endl;
    }
};

// Programa principal
int main() {
    Empleado empleado;
    empleado.capturarDatos();
    empleado.mostrarRFC();
    return 0;
}
