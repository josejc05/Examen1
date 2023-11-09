#include <iostream>
#include <vector>
#include <string>

using namespace std;
class MateriaYaRegistradaException {//Clase
public://Metodos
    MateriaYaRegistradaException(const string& materia) : materia(materia) {}

    string getMateria() const {
        return materia;
    }

private://Atributos
    string materia;
};
class Estudiante {//Clase
public://Metodos
    Estudiante(string nombre) : nombre(nombre) {}

    void registrar_materia(const string& materia) {//Metodo
        for (const string& materiaRegistrada : materias) {
            if (materiaRegistrada == materia) {
                throw MateriaYaRegistradaException(materia);
            }
        }
        materias.push_back(materia);
    }

    void listar_materias() {//Metodo
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& materia : materias) {
            cout << materia << ", ";
        }
        cout << endl;
    }
private://Atributos
    string nombre;
    vector<string> materias;
};
int main() {
    Estudiante estudiante("Juan");//Creamos el objeto

    try {//Llamamos al metodo
        estudiante.registrar_materia("Matematicas");
        estudiante.registrar_materia("Historia");
        estudiante.registrar_materia("Matematicas");
        estudiante.registrar_materia("Ciencias");

        estudiante.listar_materias();
    } catch (const MateriaYaRegistradaException& ex) {//Imprimimos el error
        cerr << "Error: La materia '" << ex.getMateria() << "' ya ha sido registrada." << endl;
    }

    return 0;
}
