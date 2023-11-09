#include <iostream>
using namespace std;
void intercambiar(int *a, int *b){
    int aux= *a;
    *a = *b;
    *b = aux;
}
int main(){
    int n1=33, n2=77;
    cout<<"Valores originales: n1="<<n1<<", n2="<<n2<<endl;
    int* ptr1 = &n1;
    int* ptr2 = &n2;

    intercambiar(ptr1, ptr2);

    cout << "Valores intercambiados: num1 = " << n1 << ", num2 = " << n2 << endl;

    return 0;
}