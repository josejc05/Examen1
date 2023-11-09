#include <iostream>
using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw "División por cero no está permitida"; // Lanzar una excepción
        }
    return x / y;
    }

int main() {
    int numerador, denominador;
    cout << "Ingrese el numerador: ";
    cin >> numerador;
    cout << "Ingrese el denominador: ";
    cin >> denominador;
    try {
        int resultado = divide(numerador, denominador);
        cout << "Resultado de la división: " << resultado << endl;
    } catch (const char* mensaje) {
        cout << "Excepción atrapada: " << mensaje << endl;
    }

    cout << "El programa continúa después de la excepción." << endl;
    return 0;
}