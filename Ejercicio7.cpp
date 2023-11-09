#include <iostream>
#include <string>

using namespace std;
class registroAsistencia {//creamos la clase registroAsistencia
public://atributos de la clase
    registroAsistencia(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {//metodo de la clase
        cout << "Fecha: " << fecha << ", Asistencia: " << estado << endl;
    }

private://atributos de la clase
    string fecha;
    string estado;
};
int main() {
    registroAsistencia asistencia1("2023-11-08", "Tarde");//creamos los objetos
    registroAsistencia asistencia2("2023-11-09", "Falta");
    registroAsistencia asistencia3("2023-11-10", "Asistencia");
    asistencia1.mostrar_asistencia();//llamamos al metodo
    asistencia2.mostrar_asistencia();
    asistencia3.mostrar_asistencia();

    return 0;
}
