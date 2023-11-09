#include <iostream>
#include <string>

using namespace std;
class Profesor {//creamos la clase Profesor
public://atributos de la clase
    Profesor(string nombre, int edad, string materia, int experiencia)
            : nombre(nombre), edad(edad), materia(materia), experiencia(experiencia) {}

    void mostrar_info_profesor() {//metodo de la clase
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Materia impartida: " << materia << endl;
        cout << "Anos de experiencia: " << experiencia << " anos" << endl;
    }
private://atributos de la clase
    string nombre;
    int edad;
    string materia;
    int experiencia;
};
int main() {
    Profesor profesor("Jose Jurado", 18, "Programacion", 2);//creamos el objeto

    profesor.mostrar_info_profesor();//llamamos al metodo

    return 0;
}