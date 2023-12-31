#include <iostream>
using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw "División por cero no está permitida"; // Lanzar una excepción
        }
    return x / y;//retornamos el resultado
    }

int main() {
    int numerador, denominador;
    cout << "Ingrese el numerador: ";//pedimos los numeros
    cin >> numerador;
    cout << "Ingrese el denominador: ";
    cin >> denominador;
    try {//intentamos ejecutar el bloque de codigo
        int resultado = divide(numerador, denominador);
        cout << "Resultado de la división: " << resultado << endl;//imprimimos el resultado
    } catch (const char* mensaje) {//atrapamos la excepcion
        cout << "Excepción atrapada: " << mensaje << endl;
    }

    cout << "Este programa continúa después de la excepción." << endl;//imprimimos el mensaje
    return 0;
}