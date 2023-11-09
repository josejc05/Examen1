#include <iostream>
#include <string>

using namespace std;
class RegistroAsistencia {
public:
    RegistroAsistencia(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {
        cout << "Fecha: " << fecha << ", Asistencia: " << estado << endl;
    }

private:
    string fecha;
    string estado;
};