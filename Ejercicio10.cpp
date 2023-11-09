#include <iostream>
#include <string>

using namespace std;
class Profesor {
public:
    Profesor(string nombre, int edad, string materia, int experiencia)
            : nombre(nombre), edad(edad), materia(materia), experiencia(experiencia) {}

    void mostrar_info_profesor() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Materia impartida: " << materia << endl;
        cout << "Anos de experiencia: " << experiencia << " anos" << endl;
    }
