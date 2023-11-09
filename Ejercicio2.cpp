#include <iostream>
using namespace std;
class Estudiante{//creamos la clase estudiante
    private://atributos de la clase
        string nombre;
        int edad;
        string grado;
    public://metodos de la clase
        void mostrar_info(){
            cout << "Ingrese el nombre del estudiante: ";//pedimos los datos
            cin >> nombre;
            cout << "Ingrese la edad del estudiante: ";
            cin >> edad;
            cout << "Ingrese el grado del estudiante: ";
            cin >> grado;
            cout<<"Nombre: "<<nombre<<endl;//imprimimos los datos
            cout<<"Edad: "<<edad<<endl;
            cout<<"Grado: "<<grado<<endl;
        }
};
int main(){
    Estudiante estudiante1;//creamos el objeto
    cout<<"Informacion del estudiante"<<endl;
    estudiante1.mostrar_info();//llamamos al metodo
    return 0;
}