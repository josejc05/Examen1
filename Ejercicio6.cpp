#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> calificaciones = {8, 9, 7, 9, 8};

    cout << "Mis calificaciones:";
    for (int calificacion : calificaciones) {
        cout << " " << calificacion;
    }
    cout << endl;

    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    double promedio = static_cast<double>(suma) / calificaciones.size();

    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
