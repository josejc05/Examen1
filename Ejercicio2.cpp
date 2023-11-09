#include <iostream>
using namespace std;
class Estudiante{
    private:
        string nombre;
        int edad;
        string grado;
    public:
        void mostrar_info(){
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombre;
            cout << "Ingrese la edad del estudiante: ";
            cin >> edad;
            cout << "Ingrese el grado del estudiante: ";
            cin >> grado;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Grado: "<<grado<<endl;
        }
};
int main(){
    Estudiante estudiante1;
    cout<<"Informacion del estudiante"<<endl;
    estudiante1.mostrar_info();
    return 0;
}