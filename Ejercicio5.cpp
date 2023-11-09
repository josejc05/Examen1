#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Estudiante {//Clase
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrar_materia(const string& materia) {//Metodo
        materias.push_back(materia);
    }

    void listar_materias() {//Metodo
        cout << nombre << " ha registrado las siguientes materias: ";//Imprime el nombre del estudiante
        for (const string& materia : materias) {//Imprime las materias
            cout << materia << ", ";
        }
        cout << endl;
    }
private://Atributos
    string nombre;
    vector<string> materias;
};
int main() {
    Estudiante estudiante("Jose");//Creamos el objeto

    estudiante.registrar_materia("Matematicas");//Llamamos al metodo
    estudiante.registrar_materia("Fisica");
    estudiante.registrar_materia("Programacion");

    estudiante.listar_materias();//Llamamos al metodo

    return 0;
}
