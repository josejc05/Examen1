#include <iostream>
using namespace std;
int main(){
    int divide(int x, int y) {
        if (y == 0) {
            throw "División por cero no está permitida"; // Lanzar una excepción
        }
        return x / y;
    }

    return 0;
}