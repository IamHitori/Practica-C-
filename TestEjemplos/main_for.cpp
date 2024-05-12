#include <iostream>

using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de datos: ";
    cin >> cantidad;

    double* datos = new double[cantidad];

    cout << "Ingrese " << cantidad << " números:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Dato " << i + 1 << ": ";
        cin >> *(datos + i);
    }

    // Suma
    double suma = 0;
    for (int i = 0; i < cantidad; ++i) {
        suma += *(datos + i);
    }
    cout << "Suma: " << suma << endl;

    // Resta
    double resta = *datos;
    for (int i = 1; i < cantidad; ++i) {
        resta -= *(datos + i);
    }
    cout << "Resta: " << resta << endl;

    // Multiplicación
    double producto = 1;
    for (int i = 0; i < cantidad; ++i) {
        producto *= *(datos + i);
    }
    cout << "Multiplicación: " << producto << endl;

    // División
    double division = *datos;
    bool error = false;
    for (int i = 1; i < cantidad; ++i) {
        if (*(datos + i) != 0) {
            division /= *(datos + i);
        } else {
            cout << "Error: división por cero." << endl;
            error = true;
            break;
        }
    }
    if (!error) {
        cout << "División: " << division << endl;
    }

    delete[] datos; // Liberar la memoria asignada al arreglo dinámico

    return 0;
}
