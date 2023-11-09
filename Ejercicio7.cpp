#include <iostream>
#include <string>

using namespace std;
class registroAsistencia {
public:
    registroAsistencia(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {
        cout << "Fecha: " << fecha << ", Asistencia: " << estado << endl;
    }

private:
    string fecha;
    string estado;
};
int main() {
    registroAsistencia asistencia1("2023-11-08", "Tarde");
    registroAsistencia asistencia2("2023-11-09", "Falta");
    registroAsistencia asistencia3("2023-11-10", "Asistencia");
    asistencia1.mostrar_asistencia();
    asistencia2.mostrar_asistencia();
    asistencia3.mostrar_asistencia();

    return 0;
}
