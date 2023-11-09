#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Estudiante {
public:
    Estudiante(const string& nombre, const string& grado) : nombre(nombre), grado(grado) {}

    const string& getGrado() const {
        return grado;
    }

    const string& getNombre() const {
        return nombre;
    }
private:
    string nombre;
    string grado;
};

vector<Estudiante> filtrarEstudiantesPorGrado(const vector<Estudiante>& estudiantes, const string& grado) {
    vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.getGrado() == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}