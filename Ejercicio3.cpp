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
    return 0;
}