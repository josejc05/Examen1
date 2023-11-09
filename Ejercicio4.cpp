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

    return 0;
}