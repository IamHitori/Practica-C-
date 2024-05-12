#include<iostream>
using namespace std;

int main(){
    float numero1,numero2,suma,resta,division,multiplicacion = 0;

    cout<<"Digita un numero: "; cin>>numero1;
    cout<<"Digita un segundo numero: "; cin>>numero2;

    //Operaciones
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    division = numero1 / numero2; 
    multiplicacion = numero1 * numero2;

    //mostrar datos
    cout<<"Tu suma es: "<<suma<<endl;
    cout<<"Tu resta es: "<<resta<<endl;
    cout<<"Tu division es: "<<division<<endl;
    cout<<"Tu multiplicacion es: "<<multiplicacion<<endl;
    return 0;
}