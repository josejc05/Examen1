#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Estudiante {//Clase
public://Metodos
    Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {}
    string obtenerNombre() const {
        return nombre;
    }
    int obtenerGrado() const {
        return grado;
    }

private://Atributos
    string nombre;
    int grado;
};
int main() {
    vector<Estudiante> estudiantes;//Creamos el vector

    estudiantes.push_back(Estudiante("Juan", 5));//Agregamos los estudiantes
    estudiantes.push_back(Estudiante("Maria", 6));
    estudiantes.push_back(Estudiante("Pedro", 5));
    estudiantes.push_back(Estudiante("Luis", 4));
    estudiantes.push_back(Estudiante("Ana", 6));

    cout << "Grados disponibles:\n";//Imprimimos los grados
    for (const Estudiante& estudiante : estudiantes) {//Imprimimos los estudiantes
        cout << estudiante.obtenerNombre() << " - Grado " << estudiante.obtenerGrado() << endl;
    }

    int gradoBuscado;//Pedimos el grado
    cout << "Elija un grado para filtrar: ";
    cin >> gradoBuscado;

    cout << "Estudiantes del grado " << gradoBuscado << ":\n";
    for (const Estudiante& estudiante : estudiantes) {//Imprimimos los estudiantes del grado
        if (estudiante.obtenerGrado() == gradoBuscado) {
            cout << estudiante.obtenerNombre() << endl;
        }
    }
    return 0;
}