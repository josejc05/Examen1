#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrar_materia(const string& materia) {
        materias.push_back(materia);
    }

    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& materia : materias) {
            cout << materia << ", ";
        }
        cout << endl;
    }
private:
    string nombre;
    vector<string> materias;
};
int main() {
    Estudiante estudiante("Jose");

    estudiante.registrar_materia("Matematicas");
    estudiante.registrar_materia("Fisica");
    estudiante.registrar_materia("Programacion");

    estudiante.listar_materias();

    return 0;
}
