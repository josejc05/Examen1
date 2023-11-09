#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> calificaciones = {8, 9, 7, 9, 8};//creamos el vector calificaciones

    cout << "Mis calificaciones:";
    for (int calificacion : calificaciones) {//imprimimos las calificaciones
        cout << " " << calificacion;
    }
    cout << endl;

    int suma = 0;
    for (int calificacion : calificaciones) {//calculamos el promedio
        suma += calificacion;
    }

    double promedio = static_cast<double>(suma) / calificaciones.size();//calculamos el promedio

    cout << "El promedio de las calificaciones es: " << promedio << endl;//imprimimos el promedio

    return 0;
}
