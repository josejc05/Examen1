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