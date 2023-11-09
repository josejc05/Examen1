#include <iostream>
using namespace std;
void intercambiar(int *a, int *b){//Paso por referencia
    int aux= *a;
    *a = *b;
    *b = aux;
}
int main(){
    int n1=33, n2=77;//declaramos las variables
    cout<<"Valores originales: n1="<<n1<<", n2="<<n2<<endl;//imprimimos los valores originales
    int* ptr1 = &n1;//declaramos los punteros
    int* ptr2 = &n2;

    intercambiar(ptr1, ptr2);//llamamos a la funcion

    cout << "Valores intercambiados: n1 = " << n1 << ", n2 = " << n2 << endl;//imprimimos los valores intercambiados

    return 0;
}